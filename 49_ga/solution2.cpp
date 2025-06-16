#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/group-anagrams/
// ? Lvl - Medium

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> res;
    for (const string &s: strs) {
        string str = s;
        sort(str.begin(),str.end());
        res[str].push_back(s);
    }
    vector<vector<string>> result;
    for (const pair<string,vector<string>> pair: res) {
        result.push_back(pair.second);
    }
    return result;
}

/* * Решение 
 * Каждая анаграмма при сортировке даст одну и ту же строку, так что HashMap может хранить в ключе такую строку,
 * которая будет получена простой сортировкой строки, а значение будет эта строка, но уже в виде анаграммы
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
