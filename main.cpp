#include <iostream>
using namespace std;

/*
 * [Lession] Two Sum
 *
 * _____EN_____
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * You can return the answer in any order.
 *
 *_____VN_____
 * Cho mảng số nguyên nums và một số nguyên target. Hãy tìm hai phần tử mà tổng của chúng chính bằng target, trả về kết quả là vị trí index của chúng trong mảng nums.
 * Mỗi phần tử trong mảng chỉ được sử dụng một lần trong phép tính tổng.
 * Kết quả trả về dưới dạng mảng, sắp xếp theo thứ tự bất kì.
 *
 *_____CT_____
 * Constraints
 * 2 <= nums.length <= 10^4
 * -10^9 <= nums[i] <= 10^9
 * -10^9 <= target <= 10^9
 *
 *_____EX_____
 * Example 1:
 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1]
 * Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 *
 * Example 2:
 * Input: nums = [3,2,4], target = 6
 * Output: [1,2]
 *
 * Example 3:
 * Input: nums = [3,3], target = 6
 * Output: [0,1]
 *
 */

class Solution {
public:
    int nums[5];
    int numsLength = sizeof(nums) / sizeof(int);
    int target;

    void inputArr () {
        for (int i = 0; i < numsLength; ++i) {
            cin >> nums[i];
        }
    }

    void inputTarget() {
        cin >> target;
    }

    int* twoSum() {
        int* res = new int[2];

        for (int i = 0; i < numsLength; ++i) {
            for (int j = i + 1; j < numsLength; ++j) {
                if (nums[i] + nums[j] == target) {
                    res[0] = i;
                    res[1] = j;
                    return res;
                }
            }
        }

        return nullptr;
    }
};

int main() {
    Solution solution;

    cout << "Enter array with 5 elements: " << endl;
    solution.inputArr();
    cout << "Enter target number: " << endl;
    solution.inputTarget();
    int* result = solution.twoSum();

    if (result) {
        cout << "Index: " << result[0] << " & " << result[1] << endl;
    } else {
        cout << "No two sum solution found" << endl;
    }

    delete[] result;
    return 0;
}