#ifndef s21_math_h
#define s21_math_h
#include "s21_math.h"
#endif

typedef union {
    float f;
    struct {
        unsigned int m : 23;
        unsigned int e : 8;
        unsigned int s : 1;
    } parts;
} float_cast;

