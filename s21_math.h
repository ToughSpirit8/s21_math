#include <stdio.h>
#include <stdlib.h>
#include <float.h> //возможно понадобится для констант, если нет удалить. Например при вычислении экспоненты чтобы не вылететь за пределы лонг дабла
#include <limits.h> //возможно понадобится для констант, если нет удалить. Например, для диапазонов при исп лонг лонг инт
#include <check.h> //Нужна для модульного тестирования 


#define _POSIX_C_SOURCE = 200809L
#define s21_Inf |x| / +0
#define s21_NAN 0 / 0
#define s21_PI 3.14159265358979323846L
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
long double s21_log(double x); //вычисляет натуральный логарифм
long double s21_pow(double base, double exp); //возводит число в заданную степень
long double s21_sin(double x); //вычисляет синус
long double s21_sqrt(double x); //вычисляет квадратный корень
long double s21_tan(double x); //вычисляет тангенс