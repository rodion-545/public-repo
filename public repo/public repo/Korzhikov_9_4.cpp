#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int* array = new int[size];

    cout << "Enter array elements:\n";

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int choice;

    cout << "\n1 - Ascending\n";
    cout << "2 - Descending\n";
    cout << "Choose sorting: ";
    cin >> choice;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((choice == 1 && array[j] > array[j + 1]) ||
                (choice == 2 && array[j] < array[j + 1])) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted array:\n";

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    delete[] array;

    return 0;
}