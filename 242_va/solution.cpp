#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/valid-anagram/
// ? Lvl - Easy

bool isAnagram(string s, string t) {
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return s == t;
}

/* * Решение
 * Сортирую две строки лексикографически и сравниваю, ничего сложного
 *  */

int main() {
    cout << isAnagram("anagram","nagaram") << endl;
    return 0;
}
