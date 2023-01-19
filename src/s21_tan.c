#include "s21_math.h"

long double s21_tan(double x) {
  long double result;
  if (x != x) {
    result = x;
  } else if (s21_fabs(x) == s21_INFINITY) {
    result = s21_NAN;
  } else {
    result = s21_sin(x) / s21_cos(x);
  }
  return result;
}