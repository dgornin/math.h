#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double result;
  if (base == 1) {
    result = 1;
  } else if (base == -1 && s21_fabs(exp) == s21_INFINITY) {
    result = 1;
  } else if (base == 0 && (exp > 0)) {
    result = 0;
  } else if (exp == 0) {
    result = 1;
  } else if (base == 0 && exp >= 0) {
    result = s21_INFINITY;
  } else if (base != base || exp != exp) {
    result = s21_NAN;
  } else if ((exp == s21_INFINITY && s21_fabs(base) > 1) ||
             (exp == -s21_INFINITY && s21_fabs(base) < 1)) {
    result = s21_INFINITY;
  } else if (exp == -s21_INFINITY ||
             (exp == s21_INFINITY && s21_fabs(base) < 1)) {
    result = 0;
  } else {
    if (exp == 0) {
      result = 1;
    } else {
      if (exp == (long int)exp || s21_fabs(exp) == s21_INFINITY) {
        result = s21_powd(base, (int)exp);
      } else if (exp > 0) {
        result = s21_exp(exp * s21_log(base));
      } else {
        result = 1 / (s21_exp(-exp * s21_log(base)));
      }
    }
  }
  return result;
}
