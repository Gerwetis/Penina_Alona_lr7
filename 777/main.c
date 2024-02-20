#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");

    double array[30];
    double min, max, sum_positive = 0.0;
    int positive_count = 0;

    printf("����� � ���������� ������� �������:\n");

    min = max = (rand() / (double)RAND_MAX) * 200 - 100;

    for (int i = 0; i < 30; i++) {
        array[i] = (rand() / (double)RAND_MAX) * 200 - 100;

        printf("%.2f ", array[i]);

        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }

        if (array[i] > 0) {
            sum_positive += array[i];
            positive_count++;
        }
    }
    printf("\n");

    printf("̳������� �����: %.2f\n", min);
    printf("����������� �����: %.2f\n", max);

    if (positive_count > 0) {
        double average_positive = sum_positive / positive_count;
        printf("������ ����������� ������� ��������: %.2f\n", average_positive);
    } else {
        printf("���� ������� �������� ��� ���������� ����������.\n");
    }
    for (int i = 0; i < 15; i++) {
        double half;
        half = array[i];
        array[i] = array[i + 15];
        array[i + 15] = half;
    }
    printf("����� ���� ���� ������ 15 �������� � ������ 15:\n");
    for (int i = 0; i < 30; i++) {
        printf("%.2f ", array[i]);
    }

    return 0;
}
