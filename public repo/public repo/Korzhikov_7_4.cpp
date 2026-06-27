#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int size = 7;
    int array[size][size];

    srand(time(0));

    int maxValue = array[0][0];
    int minValue = array[0][0];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            array[i][j] = rand() % 100;

            if (i == 0 && j == 0) {
                maxValue = array[i][j];
                minValue = array[i][j];
            }

            if (array[i][j] > maxValue)
                maxValue = array[i][j];

            if (array[i][j] < minValue)
                minValue = array[i][j];

            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMax = " << maxValue << endl;
    cout << "Min = " << minValue << endl;

    int row, column;

    cout << "\nEnter row (0-6): ";
    cin >> row;

    cout << "Enter column (0-6): ";
    cin >> column;

    if (row >= 0 && row < size && column >= 0 && column < size) {
        array[row][column] *= 2;

        cout << "\nUpdated array:\n";

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << array[i][j] << "\t";
            }
            cout << endl;
        }
    } else {
        cout << "Invalid coordinates." << endl;
    }

    return 0;
}