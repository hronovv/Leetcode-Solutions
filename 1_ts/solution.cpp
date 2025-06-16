#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/two-sum/
// ? Lvl - Easy

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> ans;
    for (int i = 0; i < nums.size(); i++) {
        ans[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];
        if (ans.count(diff) && ans[diff] != i) {
            return {i,ans[diff]};
        }
    }
    return {};
}

/* * Решение
 * Создаем HashMap в который закидываем число и его индекс в исходном массиве (<ключ,число>)
 * Затем для каждого числа из nums находим разницу(число, которое нужно добавить, чтобы было target),
 * и если оно есть в ans, при этом его индекс не совпадает с i(тогда это одно и то же число), то возвращаем два индекса
 *  */

int main() {
    vector<int> example {3,2,4};
    vector<int> ans = twoSum(example,6);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
