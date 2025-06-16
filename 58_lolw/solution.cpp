#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/length-of-last-word/
// ? Lvl - Easy

int lengthOfLastWord(string s) {
    int i = s.length() - 1, j = s.length() - 1;
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    j = i;
    while (i >= 0 && s[i] != ' ') {
        i--;
    }
    cout << i << " " << j << endl;;
    return j-i;
}

/* * Решение
 * Начинаем с конца строки, имеем два указателя с индексами последнего символа
 * Сначала проходимся циклом с конца пока не встретим не пробельный символ, запоминаем индекс в j
 * Далее проходимся дальше уже другим циклом пока не встретим пробел, запоминаем i
 * j-i и есть наша длина в данном случае => вернем j-i
 *  */

int main() {
    cout << lengthOfLastWord("a");
    return 0;
}
