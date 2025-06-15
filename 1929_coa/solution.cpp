#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/concatenation-of-array/
// ? Lvl - Easy

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans(nums);
    ans.insert(ans.end(), nums.begin(), nums.end());
    return ans;
}

/* * Решение
 * Создаем в вектор int-ов ans с конструктором копирования и кладем туда nums
 * Затем вставляем в конец еще раз nums, передавая в insert позицию для вставк и итераторы начала и конца вставки
 *  */

int main() {
    vector<int> example {1,2,3,4,5};
    vector<int> res = getConcatenation(example);
    for (auto a: res ) {
        cout << a << endl;
    }
    return 0;
}
