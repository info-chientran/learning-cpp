#include <iostream>

using namespace std;

void insertionSort(int arr[], int length) {
    for (int i = 1; i < length; ++i) {
        int x = arr[i], pos = i - 1;
        while (pos >= 0 && x < arr[pos]) {
            arr[pos+1] = arr[pos];
            --pos;
        }
        arr[pos+1] = x;
    }
}

int binarySearch(int arr[], int length, int target) {
    int lo = 1, hi = length;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            lo = mid+1;
        else
            hi = mid-1;
    }
    return -1;
}

int main () {
    int arr[] = {3, 2,1,7,5,6};
    int length = sizeof(arr) / sizeof(int);
    insertionSort(arr, length);

    cout << binarySearch(arr, length, 3);
    return 0;
}