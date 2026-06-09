#include <iostream>


int main() {
    system("chcp 1251");
    float arr[7];

    std::cout << "Введите 7 чисел: ";
    for (int i = 0; i < 7; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Отрицательные числа:";
    for (int i = 0; i < 7; i++) {
        if (arr[i] < 0)
            std::cout << " " << arr[i];
    }
    std::cout << std::endl;

    std::cout << "Нецелые числа:";
    for (int i = 0; i < 7; i++) {
        if ((int)arr[i] != arr[i])
            std::cout << " " << arr[i];
    }
    std::cout << std::endl;

    std::cout << "Целые положительные числа:";
    for (int i = 0; i < 7; i++) {
        if (arr[i] > 0 && (int)arr[i] == arr[i])
            std::cout << " " << arr[i];
    }
    std::cout << std::endl;

    return 0;
}