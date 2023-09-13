#include "s21_math.h"

//писос ну душные лекции конечно по этим логарифмам и не понятные и бесячие...
// lg - логарифм с основанием 10, 
// log логорифм с произвольным основанием,
// ln - натуральный логарифм основание = e = 2.718281828... // вообще не пригодилась эта константа здесь
// нам нужен только натуральный логарифм #спасибо хоспаде йесусе
#define TOCHNOST 100


long double s21_log(long double x) {
    if (x == 0) {
        return -INFINITY; // Возвращаем -бесконечность при x = 0
    }

    if (x <= 0) {
        return -NAN; // Возвращаем -NaN при x < 0
    }

    if (x == 1.0) {
        return 0.0; // Логарифм от 1 равен 0
    }

    long double result = 0.0;
    long double term = (x - 1) / (x + 1);
    long double term_squared = term * term; // мы же не можем использовать степень приходится вот такую херню делать
    long double numerator = term; //числитель в ряду маклориана
    long double denominator = 1.0; // знаменатель в ряду макоронина                                             xD

    for (int i = 1; i <= TOCHNOST; i++) {
        result += numerator / denominator; // тут какая то магия 
        numerator *= term_squared;         // но работает
        denominator += 2.0;     //ln(x) = 2 * [(x - 1) / (x + 1) - (1/3) * ((x - 1) / (x + 1))^3 + (1/5) * ((x - 1) / (x + 1))^5 - (1/7) * ((x - 1) / (x + 1))^7 + ...]
    }

    result *= 2.0;

    return result;
}