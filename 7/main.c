#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");

    char word[50]; // Ви вказали, що слово може бути до 50 символів
    int count_ko = 0;
    int length;
    int i;

    // Введення слова
    printf("Введіть слово (не менше 6 символів) закінчуючи на '!': ");
    scanf("%s", word);

    // Перевірка, чи слово закінчується на '!'
    length = strlen(word);
    if (word[length - 1] != '!') {
        printf("Слово не закінчується на '!'!\n");
        return 1; // Помилка
    }

    // Перевірка, чи довжина слова більше 6 символів
    if (length < 7) {
        printf("Слово занадто коротке (менше 6 символів)!\n");
        return 1; // Помилка
    }

    // Перевірка наявності 'ко'
    for (i = 0; i < length - 1; i++) {
        if (word[i] == 'к' && word[i + 1] == 'о') {
            count_ko++;
        }
    }

    // Виведення результату або обмін символами
    if (count_ko > 0) {
        printf("Кількість 'ко' у введеному слові: %d\n", count_ko);
    }
    else {
        printf("Введений рядок з попарно зміненими місцями літерами: ");
        for (i = 0; i < length - 1; i += 2) {
            printf("%c%c", word[i + 1], word[i]);
        }
        printf("!\n");
    }

    return 0;
}

