#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/majority-element/
// ? Lvl - Easy

int majorityElement(vector<int>& nums) {
    int count = 0, max = 0;
    for (auto i: nums) {
        if (count == 0) {
            max = i;
        }
        count+= (max == i)? 1: -1;
    }
    return max;
}

/* * Решение
 * В качестве решения используется алгоритм большинства голосов Бойера — Мура
 * Учтено, что наиболеев встречаемый элемент гарантировано существует
 *  */

int main() {
    vector<int> example {2,2,1,1,1,2,2};
    cout << majorityElement(example);
    return 0;
}
