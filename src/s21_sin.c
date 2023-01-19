#include "s21_math.h"

long double s21_sin(double x) {
  long double result;
  if (x != x) {
    result = x;
  } else if (s21_fabs(x) == s21_INFINITY) {
    result = s21_NAN;
  } else {
    int k = 1;
    double sin = 0;
    x = delete (x);
    long double element = x;
    while (s21_fabs(element) >= s21_EPS) {
      sin = sin + element;
      element = (-element) * (x * x) / ((2 * k + 1) * (2 * k));
      k++;
    }
    result = sin;
  }
  return result;
}

double delete (double x) {
  while (x > s21_M_PI || x < -s21_M_PI) {
    x += x > s21_M_PI ? -2 * s21_M_PI : 2 * s21_M_PI;
  }
  return x;
}