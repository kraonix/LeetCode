class Solution {
public:
    string reverseWords(string s) {
        int count = 0;
        int i = 0;

        while (i < s.size() && s[i] != ' ') {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                count++;
            }
            i++;
        }

        int temp = 0;
        int st = i + 1;

        for (int j = i + 1; j <= s.size(); j++) {
            if (s[j] == ' ' || j == s.size()) {
                if (temp == count) {
                    reverse(s.begin() + st, s.begin() + j);
                }

                temp = 0;
                st = j + 1;
            } else {
                if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' ||
                    s[j] == 'u') {
                    temp++;
                }
            }
        }

        return s;
    }
};