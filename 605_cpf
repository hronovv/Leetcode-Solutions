#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/can-place-flowers/
// ? Lvl - Easy

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
   vector<int> ans(flowerbed.size() +2,0);
    for (int i = 0;i < flowerbed.size();i++) {
        ans[i+1] = flowerbed[i];
    }

    for (int i = 1; i < ans.size() - 1; i++) {
        if (ans[i-1] == 0 && ans[i] == 0 && ans[i+1] == 0) {
            n--;
            ans[i] = 1;
        }
    }
    return n <=0;
}

/* * Решение
 * Добавим слева и справа нули(удобнее для границ, но не учитываем их для посадки цветов)
 * Проверяем идут ли три подряд(даже учитывая новые границы нули) нуля, если да, то на i-ую ставим единицу и уменьшаем
 * кол-во цветов, которых надо посадить
 *  */

int main() {
    vector<int> example = {1,0,0,0,1};
    cout << canPlaceFlowers(example,1);
    return 0;
}
