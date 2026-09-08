// 3 ms | 14.1 MB
class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1 || numRows >= s.size())
            return s;

        vector<string> rows(numRows);

        int curr = 0;
        bool down = true;

        for (char c : s) {
            rows[curr] += c;

            if (curr == 0)
                down = true;
            else if (curr == numRows - 1)
                down = false;

            curr += down ? 1 : -1;
        }

        string ans;

        for (string row : rows)
            ans += row;

        return ans;
    }
};