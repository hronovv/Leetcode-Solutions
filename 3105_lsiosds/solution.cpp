#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
// ? Lvl - Easy

int longestMonotonicSubarray(vector<int>& nums) {
    int countincr = 1, countdecr = 1, tempincr = 1, tempdecr = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i-1]) {
            tempincr++;
        } else {
            if (tempincr > countincr) {
                countincr = tempincr;
            }
            tempincr = 1;
        }
        if (tempincr > countincr) {
            countincr = tempincr;
        }
    }
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < nums[i-1]) {
            tempdecr++;
        } else {
            if (tempdecr > countdecr) {
                countdecr = tempdecr;
            }
            tempdecr = 1;
        }
    }
    if (tempdecr > countdecr) {
        countdecr = tempdecr;
    }
    return max(countincr,countdecr);
}

/* * Решение
 * Имеем 4 переменные, парные максимальные и временные счетчики для возрастающей и убывающей последовательностей
 * Объясню для возрастающей, аналогично для убывающей:
 * Идем по циклу и смотрим, больше ли настоящий элемент предыдущего(начинаем со 2-ого элемента, по умолчанию
 * максимальный счетчик = 1), если да, то увеличиваем временый счетчик, если нет, то надо сравнить временный счетчик
 * с максимальным, если больше, то заменяем, если нет, то ничего, сбрасываем временный до единицы
 * В конце может получится так, что у нас весь массив возрастал, и тогда надо проверить, больше ли временный счетчик,
 * который никогда не был сброшен, максимального, если да, заменить. Аналогично для удывающей, в конце вернем max(_,_)
 *  */

int main() {
    vector<int> nums {1,4,3,3,2};
    cout << longestMonotonicSubarray(nums);
    return 0;
}
