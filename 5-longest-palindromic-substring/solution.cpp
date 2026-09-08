// 6 ms | 9.5 MB
class Solution {
public:
    string longestPalindrome(string s) {

        int start = 0, len = 1;

        for (int i = 0; i < s.size(); i++) {

            int l = i, r = i;

            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                if (r - l + 1 > len) {
                    start = l;
                    len = r - l + 1;
                }
                l--;
                r++;
            }

            l = i;
            r = i + 1;

            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                if (r - l + 1 > len) {
                    start = l;
                    len = r - l + 1;
                }
                l--;
                r++;
            }
        }

        return s.substr(start, len);
    }
};