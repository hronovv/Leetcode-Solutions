#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/group-anagrams/
// ? Lvl - Medium

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> res;
    for (const string &s: strs) {
        vector<int> c(26,0);
        for (char ch: s) {
            c[ch-'a']++;
        }
        string key = to_string(c[0]);
        for (int i = 1; i < 26; ++i) {
            key+= "." + to_string(c[i]);
        }
        res[key].push_back(s);
    }
    vector<vector<string>> result;
    for (const pair<string,vector<string>> pair: res) {
        result.push_back(pair.second);
    }
    return result;
}

/* * Решение
 * Каждая анаграма хранит одинаковое кол-во символов, так что мы можем хранить в HashMap в качетве ключа строку,
 * которая содержит кол-во каждого символа через пробел, а в значениях будет вектор всех таких строк
 *  */

int main() {
    vector<string> example {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans = groupAnagrams(example);
    for (vector<string> vec: ans) {
        for (const string s: vec) {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}
