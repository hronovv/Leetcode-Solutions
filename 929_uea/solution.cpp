#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/unique-email-addresses/
// ? Lvl - Easy

int numUniqueEmails(vector<string>& emails) {
    unordered_map<string,vector<string>> ans;
    int count = 0;
    for (string s: emails) {
        int at_pos = -1;
        int plus_pos = -1;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '+' && plus_pos == -1) {
                plus_pos = i;
            }
            if (s[i] == '@') {
                at_pos = i;
                break;
            }
        }
        string ln = (plus_pos == -1 || plus_pos > at_pos) ? s.substr(0,at_pos) : s.substr(0,plus_pos);
        erase(ln,'.');
        string dn = s.substr(at_pos+1);
        if (find(ans[ln].begin(),ans[ln].end(),dn) == ans[ln].end()) {
            ans[ln].push_back(dn);
        }
    }
    for (auto a: ans) {
        count+= a.second.size();
    }
    return count;
}

/* * Решение
 * Моя идея такова: сначала найдем позицию "+", в HashMap в качестве ключа будем добавлять имя(значение - домент почты)
 * Имя получим подстрокой строки от 0 до позиции плюса(или если его нет(или плюс только в домене почты оказался), то
 * от 0 до позиции @), в которой все точки удалим
 * Домен почты получим подстрокой строки(все, что после @)
 * Потом просто складываем кол-во значений у каждого ключа - и есть кол-во разных адресов.
 *  */

int main() {
    vector<string> example {"test.email+alex@leetcode.com", "test.email@leetcode.com"};
    cout << numUniqueEmails(example);
    return 0;
}
