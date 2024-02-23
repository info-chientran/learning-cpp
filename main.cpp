#include <iostream>
using namespace std;

/*
 * input: nhập dữ liệu từ bàn phím 3 số tự nhiên a,b,c != 0
 * điều kiện: b<a<c, a chia hết cho 2
 * yêu cầu:
 * - viết hàm tính tổng của a,b,c
 * - tính phần dư của a/b,
 * - tính tổng của phần dư a/b + c/b
 */

// Function
int sum(int a, int b, int c) {
    return a + b + c;
}

int calculateRemainderAB (int a, int b) {
    return b % a;
}

int calculateRemainderABC (int a, int b, int c) {
    return (b % a) + (c % b);
}

int main() {
    int firstNumber, secondNumber, thirdNumber;

    // Input

    cout << "Enter first number: " << endl;
    cin >> firstNumber;

    if (firstNumber < 1) {
        return 0;
    }

    cout << "Enter second number: " << endl;
    cin >> secondNumber;

    if (firstNumber > secondNumber || secondNumber < 1 || secondNumber % 2 != 0) {
        return 0;
    }

    cout << "Enter third number: " << endl;
    cin >> thirdNumber;

    if (thirdNumber < secondNumber || thirdNumber < firstNumber || thirdNumber < 1) {
        return 0;
    }

    cout << "Sum = " << sum(firstNumber, secondNumber, thirdNumber) << endl;
    cout << "calculate remainder a/b = " << calculateRemainderAB(firstNumber, secondNumber) << endl;
    cout << "calculate remainder a/b + c/b = " << calculateRemainderABC(firstNumber, secondNumber, thirdNumber);
}