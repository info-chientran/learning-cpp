/*
 * [Exercise]
 *
 * Viết một chương trình c++ thực hiện đảo ngược các giá trị trong một mảng đã cho.
 *
 */

#include <iostream>
using namespace std;

void reverseArr(int arr[], int length) {
    int first = 0;
    int last = length - 1;

    while (first < last) {
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;

        first++;
        last--;
    }
}

void displayArr(int arr[], int length) {
    cout << "Array items: " << endl;
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[6] = {-3, 5, 1, 3, 2, 10};
    int length = sizeof(arr) / sizeof(int);

    reverseArr(arr, length);
    displayArr(arr, length);

    return 0;
}