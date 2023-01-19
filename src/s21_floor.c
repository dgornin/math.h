#include "s21_math.h"

long double s21_floor(double x) {
  long double result;
  if (s21_fabs(x) != s21_INFINITY && x == x) {
    int sign = 1;
    if (x < 0) {
      sign = -1;
    }
    long ipart = (long)x;
    if (sign == -1 && ipart != x) {
      ipart--;
    }
    result = (long double)ipart;
  } else if (s21_fabs(x) == s21_INFINITY) {
    result = x;
  } else {
    result = s21_NAN;
  }
  return result;
}
