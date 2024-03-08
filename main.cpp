/*
 * [Lession]
 * [Exercise]
 *
 */

#include <iostream>
using namespace std;

void Swap(int &x,int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int arr[5] = {4, 8, 5, 7, 9};
    int arrLength = sizeof(arr) / sizeof(int);

    for(int i = 0; i < arrLength - 1; i++) {
        for(int j = i + 1; j < arrLength; j++) {
            if(arr[i] > arr[j]) {
                Swap(arr[i], arr[j]);
            }
        }
    }

    for(int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
