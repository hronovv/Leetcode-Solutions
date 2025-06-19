#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/maximum-ascending-subarray-sum/description/
// ? Lvl - Easy

int maxAscendingSum(vector<int>& nums) {
    int temp_sum = nums[0], max_sum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i-1]) {
            temp_sum+=nums[i];
        } else {
            if (temp_sum > max_sum) {
                max_sum = temp_sum;
            }
            temp_sum = nums[i];
        }
    }
    if (temp_sum > max_sum) {
        max_sum = temp_sum;
    }
    return max_sum;
}

/* * Решение
 * Аналогичное решение 3105 задаче(+ только возрастание нужно), только теперь вместо кол-ва элементов мы считаем сумма,
 * соответственно добавляем к сумме элементы, а если прерывается, то временная становится равной текущему элементу
 *  */

int main() {
    vector<int> nums {12,17,15,13,10,11,12};
    cout << maxAscendingSum(nums);
    return 0;
}
