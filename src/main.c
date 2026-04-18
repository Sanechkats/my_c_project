#include <stdio.h>
#include <stdlib.h>

#include "../include/lab1.h"
#include "../include/lab2.h"

void print_menu() {
    printf("\n--- Главное меню ---\n");
    printf("1. Задание 1 (Расчёт начальной скорости шарика)\n");
    printf("2. Задание 2 (Расчёт суммы ряда)\n");
    printf("0. Выход\n");
    printf("Ваш выбор: ");
}

int main() {
    int choice;
    int running = 1;

    while (running) {
        print_menu();

        if (scanf("%d", &choice) != 1) {
            printf("Ошибка ввода. Пожалуйста, введите число.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1: {
                printf("\n--- Задание 1: Расчёт начальной скорости шарика ---\n");

                float H, t, result;

                printf("Введите высоту H (м): ");
                scanf("%f", &H);

                printf("Введите время падения t (с): ");
                scanf("%f", &t);

                result = calculate_initial_velocity(H, t);

                if (result < 0) {
                    printf("Ошибка: время должно быть положительным!\n");
                } else {
                    printf("Начальная скорость шарика: v0 = %.2f м/с\n", result);
                }
                break;
            }
            case 2: {
                printf("\n--- Задание 2: Расчёт суммы ряда ---\n");

                float n, x, sum;

                printf("Введите N: ");
                scanf("%f", &n);

                printf("Введите x: ");
                scanf("%f", &x);

                sum = calculate_series_sum(n, x);

                printf("Сумма ряда: s = %.4f\n", sum);
                break;
            }
            case 0: {
                printf("Выход из программы.\n");
                running = 0;
                break;
            }
            default: {
                printf("Неверный выбор. Пожалуйста, выберите 0, 1 или 2.\n");
                break;
            }
        }
    }
    return 0;
}
