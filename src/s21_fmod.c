#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double result;
  if (x != x || y != y || y == 0 || s21_fabs(x) == s21_INFINITY) {
    result = s21_NAN;
  } else {
    long double res = x;
    int sign = 1;
    if (res < 0) {
      sign = -1;
      res = -res;
    }
    if (res != y) {
      while (s21_fabs(res) >= s21_fabs(y)) {
        res = s21_fabs(res) - s21_fabs(y);
      }
    } else {
      res = 0.0;
    }
    result = res * sign;
  }
  return result;
}
