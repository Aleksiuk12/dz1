#include <iostream>

using namespace std;

int findMinIndex(int arr[], int size) {
    int minIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {
    int size;
    cout <<"Введіть розмір масиву:";
    cin >> size;
    int *arr = new int[size];
    cout <<"Введіть елементи масиву:";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int minIndex = findMinIndex(arr, size);
    cout <<"Індекс мінімального елемента:" << minIndex << endl;

    delete[] arr;

    return 0;
}
