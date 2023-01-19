#include "s21_math.h"

long double s21_cos(double x) {
  long double result;
  if (x != x) {
    result = x;
  } else if (s21_fabs(x) == s21_INFINITY) {
    result = s21_NAN;
  } else {
    int k = 1;
    double cos = 0;
    long double element = 1;
    x = delete (x);
    while (s21_fabs(element) >= s21_EPS) {
      cos = cos + element;
      element = (-element) * (x * x) / ((2 * k - 1) * (2 * k));
      k++;
    }
    result = cos;
  }

  return result;
}
