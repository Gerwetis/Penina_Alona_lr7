#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");

    char word[50]; // �� �������, �� ����� ���� ���� �� 50 �������
    int count_ko = 0;
    int length;
    int i;

    // �������� �����
    printf("������ ����� (�� ����� 6 �������) ��������� �� '!': ");
    scanf("%s", word);

    // ��������, �� ����� ���������� �� '!'
    length = strlen(word);
    if (word[length - 1] != '!') {
        printf("����� �� ���������� �� '!'!\n");
        return 1; // �������
    }

    // ��������, �� ������� ����� ����� 6 �������
    if (length < 7) {
        printf("����� ������� ������� (����� 6 �������)!\n");
        return 1; // �������
    }

    // �������� �������� '��'
    for (i = 0; i < length - 1; i++) {
        if (word[i] == '�' && word[i + 1] == '�') {
            count_ko++;
        }
    }

    // ��������� ���������� ��� ���� ���������
    if (count_ko > 0) {
        printf("ʳ������ '��' � ��������� ����: %d\n", count_ko);
    }
    else {
        printf("�������� ����� � ������� �������� ������ �������: ");
        for (i = 0; i < length - 1; i += 2) {
            printf("%c%c", word[i + 1], word[i]);
        }
        printf("!\n");
    }

    return 0;
}

