/*
 * [Exercise]
 *
 * Viết một chương trình c++ để thêm vào các phần tử trong một mảng và hiển thị chúng
 *
 */

#include <iostream>
using namespace std;

void getArr(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << "Enter array[" << i << "]: " << endl;
        cin >> arr[i];
    }
}

void displayArr(int arr[], int length) {
    cout << "Array items: " << endl;
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }
}

int main() {
    int length;
    cout << "Enter array length: " << endl;
    cin >> length;

    int *arr = new int [length];
    getArr(arr, length);
    displayArr(arr, length);


    return 0;
}