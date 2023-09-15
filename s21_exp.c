#include "s21_math.h"
#define TOCHNOST 1600

long double s21_exp(double x) {
  long double res = 1.0;
  if (S21_ISNAN(x)) {
    res = S21_NAN;
  } else if (x == S21_INF_POS) {
    res = S21_INF_POS;
  } else if (x == S21_INF_NEG) {
    res = S21_POSITIVE_ZERO;
  } else {
    
    int n = 1;
    long double a = x, current_term = 1;
    
    if (x < 0.) a = -x;
    
    for (int i = 0; i < TOCHNOST; i++) {
      current_term *= a / n++;
      res += current_term;
    }
    if (x < 0.) res = 1 / res;
  }
  return res;
}