#include <iostream>
using namespace std;

void getArr(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << "Enter arr [" << i << "]:" << endl;
        cin >> arr[i];
    }
}

void Swap(int &x,int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void prinArr(int arr[], int length) {
    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}


void bubbleSort(int arr[], int length) {
    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length -1; j++) {
            if(arr[j] > arr[j + 1]) {
                Swap(arr[j], arr[j + 1]);
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

    bubbleSort(arr, length);

    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
