#include <iostream>
#include "functions.cpp"


int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);


    int count = Count(str);
    cout << "Counter = " << count << endl;

    // Підготовка нового рядка для результату
    char* dest = new char[strlen(str) + 1]; // Виділяємо пам'ять під новий рядок
    Change(dest, str);


    cout << "Result = " << dest << endl;

    delete[] dest;

    return 0;
}
