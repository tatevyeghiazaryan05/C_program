#include <iostream>
template <class T>
void insertionSort (T* array, int n) {
    for (int j = 1; j < n; j++) {
        int key = array[j];
        int i = j - 1;

        while (i >= 0 && array[i] > key) {
            array[i + 1] = array[i];
            i = i - 1;
        }
        array[i + 1] = key;
    }
}

int main () {
    int arr [] = {5, 2, 4, 6, 1, 3};
    int n = sizeof (arr) / sizeof (arr[0]);

    insertionSort (arr, n);

    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}