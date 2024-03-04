#include <iostream>
using namespace std;

void getMinMax(int arr[], int arrLength) {
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < arrLength; ++i) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    cout << min << endl;
    cout << max << endl;
}

void Swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void arrangeArr(int arr[], int arrLength) {
    for (int i = 0; i < arrLength; ++i) {
        int min = i;

        for (int j = i + 1; j < arrLength; ++j) {
            if (arr[j] < arr[min]) min = j;
        }
        Swap(&arr[i], &arr[min]);
    }

    for(int i = 0; i < arrLength; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[5] = {14, 54, 2, 1, 5};
    int arrLength = sizeof(arr) / sizeof(int);

    getMinMax(arr, arrLength);
    arrangeArr(arr, arrLength);

    return 0;
}