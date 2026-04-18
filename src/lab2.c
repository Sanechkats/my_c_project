#include "../include/lab2.h"

float calculate_series_sum(float n, float x) {
    float s = 0;  // сумма ряда
    float a = 0;  // текущий член ряда
    float d = x;  // знаменатель (x, x², x³, ...)
    int i;        // счётчик

    for (i = 1; i <= n; i++) {
        a = i / d;      // вычисляем i / x^i
        s = s + a;      // прибавляем к сумме
        d = d * x;      // увеличиваем знаменатель: x, x², x³, ...
    }

    return s;
}
