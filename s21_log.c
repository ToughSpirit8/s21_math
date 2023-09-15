#include "s21_math.h"
#include <check.h>
#include <math.h>
//писос ну душные лекции конечно по этим логарифмам и не понятные и бесячие...
// lg - логарифм с основанием 10, 
// log логорифм с произвольным основанием,
// ln - натуральный логарифм основание = e = 2.718281828... // вообще не пригодилась эта константа здесь
// нам нужен только натуральный логарифм #спасибо хоспаде йесусе
#define TOCHNOST 10


long double s21_log(double x) {
    long double result = 0.0;
    
    if (x == 0) {
        result = S21_INF_NEG; // Возвращаем -бесконечность при x = 0
    }
    else if (x == S21_INF_POS){
        result = x;
    }
    else if (x <= 0) {
        result = S21_NAN; // Возвращаем -NaN при x < 0
    }
    else if (x == 1.0) {
        result = 0.0; // Логарифм от 1 равен 0
    }
    else {
        int e_repeat = 0;
        for (; x >= S21_E; e_repeat++) x /= S21_E; //FMATH

        for (int i = 0; i < 100; i++) { //FMATH
        long double compare = result;   
        result = compare + 2 * (x - exp(compare)) / (x + exp(compare)); //FMATH
        }
        result += e_repeat; //прибовляем количество репитов которое понадобилось чтобы уменьшить x до значений е
                        //зачем то
    }


    return result;
    }
// int main(){
//     double s = 0;
//     printf("%Lf\n", s21_log(s));
//     printf("%f", log(s));
//     return 0;
// }