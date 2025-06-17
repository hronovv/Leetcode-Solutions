#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/remove-element/
// ? Lvl - Easy

int removeElement(vector<int>& nums, int val) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[count++] = nums[i];
        }
    }
    return count;
}

/* * Решение
 * Заводим указатель count, он и отслеживает, сколько элементов не равны val
 * Если мы встречаем не val, то на место nums[count] ставим nums[i] (может быть так что count = i, когда мы еще
 * ни разу не встретили val, тогда мы просто перезаменяем элемент сам на себя), таким образом если встречаем val,
 * то ничего с ним не делаем и не увеличиваем count. Т.е в результате первые k элементов будут не val, остальные - мусор
 *  */

int main() {
    vector<int> nums {0,1,2,2,3,0,4,2};
    cout << removeElement(nums,2) << endl;
    for (auto a : nums) {
        cout << a << " ";
    }
    return 0;
}
