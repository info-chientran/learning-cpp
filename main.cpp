#include <iostream>
using namespace std;

void getArr(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << "Enter arr[" << i << "]:" << endl;
        cin >> arr[i];
    }
}

void printArr(int arr[], int length) {
    cout << "Array sort" << endl;
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }
}

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void interchangeSort(int arr[], int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = i + 1; j < length; ++j) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int length;
    cout << "Enter array length: " << endl;
    cin >> length;

    int *arr = new int[length];
    getArr(arr, length);
    interchangeSort(arr, length);
    printArr(arr, length);

    return 0;
}