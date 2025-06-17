#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/pascals-triangle/
// ? Lvl - Easy

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    vector<int> temp;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < i+1; j++) {
            if (j == 0 || j == i) {
                temp.push_back(1);
            } else {
                temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
        }
        ans.push_back(temp);
        temp.clear();
    }
    return ans;
}

/* * Решение
 * Тут нужны знания о Треугольнике Паскаля, советую ознакомиться
 * Итак, суть в том, что если в каком-либо ряду если элемент первый и последний, то он равен 1(смысл в комбинаторике -
 * выбрать 0 или n элементов из n элементов - 1 способ всегда)
 * Остальные элементы получаются путем сложения двух соседних элементов верхнего ряда
 * Их позиции - позиция текущего элемента в ряду и предыдущая к нему(вытекает из формулы суммы сочетаний)
 *  */

int main() {
    vector<vector<int>> ans = generate(5);
    for (vector<int> vec: ans) {
        for (int k : vec) {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}
