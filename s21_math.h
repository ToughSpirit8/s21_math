#include <stdio.h>
#include <stdlib.h>
#include <float.h> //возможно понадобится для констант, если нет удалить. Например при вычислении экспоненты чтобы не вылететь за пределы лонг дабла
#include <limits.h> //возможно понадобится для констант, если нет удалить. Например, для диапазонов при исп лонг лонг инт
#define _POSIX_C_SOURCE 200809L
//#define _GNU_SOURCE

#define S21_NAN (0.0f / 0.0f)
#define S21_ZERO_NEG -(0.0)
#define S21_ZERO_POS (0.0)
#define S21_INF_NEG (-1.0 / 0.0)
#define S21_INF_POS (+1.0 / 0.0)
#define S21_ISNAN(x) ((x) != (x))
#define s21_PI 3.14159265358979323846L
#define s21_PI_2 1.57079632679489661923L
//#define s21_2PI 6.28318530718
#define s21_e 2.71828182845904523536L
//добавить второй standart

int s21_abs(int x); //вычисляет абсолютное значение целого числа
long double s21_acos(double x); //вычисляет арккосинус
long double s21_asin(double x); //вычисляет арксинус
long double s21_atan(double x); //вычисляет арктангенс
long double s21_ceil(double x); //возвращает ближайшее целое число, не меньшее заданного значения
long double s21_cos(double x); //вычисляет косинус
long double s21_exp(double x); //возвращает значение e, возведенное в заданную степень
long double s21_fabs(double x); //вычисляет абсолютное значение числа с плавающей точкой
long double s21_floor(double x); //возвращает ближайшее целое число, не превышающее заданное значение
long double s21_fmod(double x, double y); //остаток операции деления с плавающей точкой
long double s21_log(long double x); //вычисляет натуральный логарифм 
// Почему мы принимаем только дабл? Может LONG все таки?
long double s21_pow(double base, double exp); //возводит число в заданную степень
long double s21_sin(double x); //вычисляет синус
long double s21_sqrt(double x); //вычисляет квадратный корень
long double s21_tan(double x); //вычисляет тангенс