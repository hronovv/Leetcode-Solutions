#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/contains-duplicate/
// ? Lvl - Easy

bool containsDuplicate(vector<int>& nums) {
    return !(nums.size() == set<int>(nums.begin(),nums.end()).size());
}

/* * Решение
 * Супер простое решение - запихнуть вектор в множество
 * Множество по умолчанию не имеет повторяющихся элементов, поэтому достаточно сравнить их размеры
 * Если размеры совпадают, значит повторяющихся не было, а иначе размер множества меньше, т.к повторяющиеся не вошли
 *  */

int main() {
    vector<int> example {1,2,3,1};
    cout << containsDuplicate(example) << endl;
    return 0;
}
