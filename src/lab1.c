#include "../include/lab1.h"

float calculate_initial_velocity(float H, float t) {
    const float g = 9.8;  // ускорение свободного падения

    // Проверка на корректность
    if (t <= 0) {
        return -1;  // отрицательное значение будет сигналом ошибки
    }

    // Расчёт: v0 = (H - (g * t^2) / 2) / t
    float v0 = (H - (g * t * t) / 2) / t;

    return v0;
}
