#include "s21_math.h"

typedef union {
    float f;
    struct {
        unsigned int m : 23;
        unsigned int e : 8;
        unsigned int s : 1;
    } parts;
} float_cast;

int main () {
    //printf("s21_PI * 2 = %.11Lf, s21_2PI = %.11f", s21_PI * 2, s21_2PI);
    return 0;    
}