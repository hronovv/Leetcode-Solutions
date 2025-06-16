#include <bits/stdc++.h>
using namespace std;

// ? Задача - https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/
// ? Lvl - Medium

int appendCharacters(string s, string t) {
    int i = 0,j = 0;
    while (j != s.length()) {
        if (t[i] == s[j]) {
            i++;
            j++;
            if (i == t.length()) {
                return 0;
            }
        } else {
            j++;
        }
    }
    return (t.length()-i);
}

/* * Решение
 * Задача является надстройкой над https://github.com/hronovv/Leetcode-Solutions/tree/main/392_is (аккуратно с s и t)
 * Только теперь длины строк >= 1, не надо проверок
 * Если при сдвиге указателей i == t.length(), то ранее мы бы вернули true, т.к является подпоследовательностью,
 * но это буквально означает, что нам не надо добавлять никаких символов, чтобы t стала подпоследовательностью =>
 * вернем 0
 * Ранее если цикл кончался, то мы бы вернули false, тогда это означало, что t не подпоследовательность, в нашем случае
 * следует просто вернуть разницу букв, которые мы не затронули (длина t - i) => возвращаем разницу
 *  */

int main() {
    cout << appendCharacters("coaching","coding");
    return 0;
}
