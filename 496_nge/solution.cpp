#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/next-greater-element-i/
// ? Lvl - Easy

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int> num1ind;
    for (int i = 0; i < nums1.size(); i++) {
        num1ind[nums1[i]] = i;
    }
    vector<int> res(nums1.size(), -1);
    for (int i = 0; i < nums2.size(); i++) {
        if (num1ind.count(nums2[i])) {
            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums2[i]) {
                    res[num1ind[nums2[i]]] = nums2[j];
                    break;
                }
            }
        }
    }
    return res;
}

/* * Решение
 * В HashMap будем закидывать из 1 массива элемент в качестве ключа и его индекс в 1-м массиве в качестве значения
 * Затем создадим вектор размера 1 массива со всеми элементами по умолчанию -1 (большие элементы для каждого, а -1
 * т.к по умолчанию не найден)
 * Затем проходимся по 2-му массиву и для каждого элемента проверяем есть ли он вообще в 1-м массиве, если есть, то
 * в правой части 2-ого массива ищем элемент, который будет больше, чем наш, когда нашли, то в res(вектор) на позицию
 * num1ind[nums2[i]] (индекс позиции, который хранит HashMap) вставляем найденный элемент
 *  */

int main() {
    vector<int> vec1 {4,1,2};
    vector<int> vec2 {1,3,4,2};
    vector<int> answer  = nextGreaterElement(vec1,vec2);
    for (auto i : answer) {
        cout << i << " ";
    }
    return 0;
}
