#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/isomorphic-strings/
// ? Lvl - Easy

bool isIsomorphic(string s, string t) {
    unordered_map<char,vector<int>> vs,vt;
    for (int i = 0; i < s.length(); i++) {
        vs[s[i]].push_back(i);
        vt[t[i]].push_back(i);
    }
    for (int i = 0; i < s.length(); i++) {
        if (vs[s[i]] != vt[t[i]]) {
            return false;
        }
    }
    return true;
}


/* * Решение
 * Каждый символ хранит позиции, где он находится, просто сохраняем их
 * Затем проходимся по строке и для каждого символа сравниваем с символом другой строки все позиции(вектора)
 * Если они не равны, то значит строки не изоморфны(ибо меняем мы один символ на другой) => вернем false
 * Решение не оптимально(оптимально, если все символы уникальны), потому что мы проходимся по всей строке,
 * а надо бы просто сравнивать вектора каждой пары
 *  */

int main() {
    cout << isIsomorphic("egg","add");
    return 0;
}
