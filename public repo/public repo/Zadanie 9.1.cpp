#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Введите размер массива: ";
    cin >> n;

    int arr[n];

    cout << "Введите " << n << " элементов массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0, max = arr[0], min = arr[0];

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    cout << "Сумма элементов массива: " << sum << endl;
    cout << "Среднее арифметическое элементов массива: " << (float)sum / n << endl;
    cout << "Минимальный и максимальный элементы массива: " << min << " " << max << endl;

    return 0;
}