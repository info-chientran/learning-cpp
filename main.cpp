/*
 * [Exercise]
 * Nhập 10 giá trị nguyên, sau đó tìm giá trị lớn nhất, nhỏ nhất,
 * tìm giá trị có tần suất xuất hiện nhiều nhất,
 * sắp xếp mảng theo thứ tự tăng dần, giảm dần và hiển thị kết quả.
 */

#include <iostream>
using namespace std;

void getValue(int arr[], int arrLength)
{
    cout << "Enter array values: " << endl;
    for(int i = 0; i < arrLength; i++) {
        cout << "arr[" << i << "]:" << endl;
        cin >> arr[i];
    }
}

void displayValue(int arr[], int arrLength)
{
    cout << "Array value: " << endl;
    for(int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void maxValue(int arr[], int arrLength) {
    int result = arr[0];

    for(int i = 0; i < arrLength; i++) {
        if (result < arr[i]) {
            result = arr[i];
        }
    }

    cout << "Max value of arr: " << result << endl;
}

void sortUpAscending (int arr[], int arrLength) {
    for(int i = 0; i < arrLength; i++) {
        for (int j = i + 1; j < arrLength; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted ascending: " << endl;
    for(int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortDescending (int arr[], int arrLength) {
    for(int i = 0; i < arrLength; i++) {
        for (int j = i + 1; j < arrLength; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted ascending: " << endl;
    for(int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arrLength;

    cout << "Enter array length: " << endl;
    cin >> arrLength;

    int arr[arrLength];

    getValue(arr, arrLength);

    displayValue(arr, arrLength);

//    maxValue(arr, arrLength);

    sortDescending(arr, arrLength);

    return 0;
}