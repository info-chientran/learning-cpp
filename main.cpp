/*
 * [Sort]
 *
 */

#include <iostream>
using namespace std;

void Swap(int &x,int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void prinArr(int arr[], int arrLength) {
    for(int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int arrLength) {
    for(int i = 0; i < arrLength; i++) {
        for(int j = 0; j < arrLength -1; j++) {
            if(arr[j] > arr[j+1]) {
                Swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[5] = {4, 8, 5, 7, 9};
    int arrLength = sizeof(arr) / sizeof(int);


    bubbleSort(arr, arrLength);
    prinArr(arr, arrLength);

    return 0;
}
