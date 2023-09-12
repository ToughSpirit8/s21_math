#include "s21_math.h"

s21_pow(long double base, long double powerof ){
    for(int i = 1; i <= powerof;i++){
        base = base * base;
    }
    return base;
}