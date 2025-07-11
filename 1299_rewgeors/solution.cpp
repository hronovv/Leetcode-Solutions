#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
// ? Lvl - Easy

vector<int> replaceElements(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (i == arr.size() - 1) {
            arr[i] = -1;
        } else {
            arr[i] = *max_element(arr.begin()+i+1,arr.end());
        }
    }
    return arr;
}

/* * Решение
 * Уже глянул что по времени слишком много(и можно идти в обратном порядке, решу потом по-другому), но идея такая:
 * Пробегаемся по элементам вектора и каждый заменяем на максимальный элемент справа через указатели
 * Если элемент последний (или он один), то заменяем на -1
 *  */

int main() {
    vector<int> arr{17,18,5,4,6,1};
    replaceElements(arr);
    for (auto a: arr) {
        cout << a << endl;
    }
    return 0;
}
