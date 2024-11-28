#include <iostream>
#include <cstring>

using namespace std;

// Метод для підрахунку кількості ком у рядку
int Count(const char* str) {
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == ',') {
            count++;
        }
    }
    return count;
}


void Change(char* dest, const char* str) {
    int len = strlen(str);
    int index = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == ',') {
            dest[index++] = '*';
            dest[index++] = '*';
        } else {
            dest[index++] = str[i];
        }
    }
    dest[index] = '\0'; // Завершення нового рядка
}

