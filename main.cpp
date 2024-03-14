#include <iostream>
using namespace std;

struct Data {
    string name;
    int age;

    Data(string name, int age) {
        this->name = name;
        this->age = age;
    }

    Data(){}
};

int main() {
    const int N = 8;
    int max = 0;
    Data arr[N];

    for (int i = 0; i < N; i++) {
        arr[i] = Data("a", i);
    }

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (arr[i].age < arr[j].age) {
                int temp = arr[i].age;
                arr[i].age = arr[j].age;
                arr[j].age = temp;
            }
        }
    }
    // Số câu lệnh
    // N * (N-i) = N^2 - Ni
    // O(n) = n^2
    // O(n) lấy bậc cao nhất để tính hiệu năng thuật toán
    // hiệu năng bằng số câu lệnh mà thuật toán chạy


    for (Data item : arr) {
        cout << item.age << " ";
    }


    return 0;
}