class Solution {
public:
    int maxDifference(string s) {
        std::unordered_map<char,int> freqs;
        for (auto ch : s) {
            freqs[ch]++;
        }
        int max_odd {}, min_even = s.length();

        for (auto pair: freqs) {
            if (pair.second%2 && pair.second > max_odd) {
                max_odd = pair.second;
            }
            if (!(pair.second%2) && pair.second < min_even) {
                min_even = pair.second;
            }
        }
        return max_odd - min_even;
    }
};
