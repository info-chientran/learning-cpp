#include <iostream>
using namespace std;

void Swap (int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void ArrangeArr ()
{
    int myArr[5] = {3, 5, 2, 4, 1};
    int myArrLength = sizeof(myArr) / sizeof(int);

    for (int i = 0; i < myArrLength - 1; ++i) {
        for (int j = i + 1; j < myArrLength; ++j) {

            if (myArr[i] > myArr[j]) {
                Swap(myArr[i], myArr[j]); //&myArr[i] trả về địa chỉ của biến đó
            }
        }
    }

    for (int i = 0; i < myArrLength; ++i) {
        cout << myArr[i] << " ";
    }

}



int main()
{
    ArrangeArr();

    return 0;
}