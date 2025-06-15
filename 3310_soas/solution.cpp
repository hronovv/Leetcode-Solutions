#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/score-of-a-string/
// ? Lvl - Easy

int scoreOfString(string s) {
    int score = 0;
    for (int i = 0; i < s.length()-1;i++) {
        score+= abs(int(s[i])-int(s[i+1]));
    }
    return score;
}

/* * Решение
 * Изначально надо хранить в int переменной счет - score
 * Находим разницу в парах, так что итераций = кол-во пар, а пар на 1 меньше чем символов
 * Итерируемся по символам строки len(s) - 1 раз, и находим модуль разности интовых(ASCII) значений текущего [i] и
 * следующего [i+1] символа, добавляем в score разницу, по окончанию цикла возвращаем score
 *  */ 

int main() {
    string input  = "hello";
    cout << scoreOfString(input);
    return 0;
}
