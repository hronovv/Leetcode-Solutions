#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/string-matching-in-an-array/
// ? Lvl - Easy

vector<string> stringMatching(vector<string>& words) {
    vector<string> res;
    sort(words.begin(), words.end(), [](const string& a, const string& b) {
            return a.length() < b.length();
        });
    for (int i = 0; i < words.size(); i++) {
        for (int j = i+1; j < words.size();j++) {
            if (words[j].find(words[i]) != string::npos) {
                res.push_back(words[i]);
                break;
            }
        }
    }
    return res;
}

/* * Решение
 * Сортируем наш массив с компаратором по длине по возрастанию
 * Затем будем для каждого слова проверять, содержится ли оно в словах справа от него
 * Сортировали, чтобы слова левее нашего слов не нужно было проверять(подстрока не может быть больше строки)
 * Если содержится хотя бы 1 в одном => добавляем в массив и прерываем цикл для данного слова
 *  */

int main() {
    vector<string> example { "mass","as","hero","superhero"};
    vector<string> ans = stringMatching(example);
    for (const string s : ans) {
        cout << s << endl;
    }
    return 0;
}
