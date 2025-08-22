#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/find-pivot-index/
// ? Lvl - Easy

int pivotIndex(vector<int>& nums) {
    int total = accumulate(nums.begin(), nums.end(), 0);
    int left = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (left == total - left - nums[i])
            return i;
        left += nums[i];
    }
    return -1;
}


/* * Решение
 * Для начала найдем всю сумму элементов(по сути сумма справа от указателя, который изначально на 1-м элементе,
 * сумма слева равняется 0)
 * Пройдемся по всему вектору, и когда сумма слева будет равна сумме справа - сумме слева( по сути текущая сумма справа,
 * ведь сумма справа изначально = сумма всего массива), а также - текущий элемент(ведь по условию задачи это и есть тот
 * элемент, индекс которого надо найти), в этом случае вернем индекс i, иначе если дойдем до конца и не сможем найти, то
 * вернем -1. O(2*N) - time complexity , O(2) - space complexity
 *  */

int main() {
    vector<int> nums {-1,-1,-1,-1,-1,-1};
    cout << pivotIndex(nums);
    return 0;
}


