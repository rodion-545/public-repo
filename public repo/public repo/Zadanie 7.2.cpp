#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int arr[5][8];
    int sum = 0, max, min;

    srand(time(0));

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            arr[i][j] = rand() % 21 - 10;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    max = arr[0][0];
    min = arr[0][0];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            sum += arr[i][j];
            if (arr[i][j] > max) max = arr[i][j];
            if (arr[i][j] < min) min = arr[i][j];
        }
    }

    cout << "Сумма элементов: " << sum << endl;
    cout << "Максимальный элемент: " << max << endl;
    cout << "Минимальный элемент: " << min << endl;

    return 0;
}