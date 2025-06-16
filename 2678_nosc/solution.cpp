#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/number-of-senior-citizens/
// ? Lvl - Easy

int countSeniors(vector<string>& details) {
    int count = 0;
    for (string s: details) {
       if (stoi(s.substr(11,2)) > 60) {
           count++;
       }
    }
    return count;
}

/* * Решение
 * Довольно просто - возраст это 11 и 12 индекс
 * Просто берем подстроку, приводим к int (stoi()), и сравниваем, если > 60, увеличиваем счетчик
 * Можно было без подстроки, т.к всего 2 символа через  -'0' у char
 * Но если не 2 символа, то лучше substr
 *  */

int main() {
    vector<string> example {"7868190130M7522","5303914400F9211","9273338290F4010"};
    cout << countSeniors(example) << endl;
    return 0;
}
