// 0 ms | 12 MB
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        // Start by assuming the first string is the common prefix
        string prefix = strs[0];
        
        for (int i = 1; i < strs.size(); i++) {
            // Check while the current string does NOT start with 'prefix'
            while (strs[i].find(prefix) != 0) {
                // Shorten the prefix from the end by 1 character
                prefix = prefix.substr(0, prefix.length() - 1);
                
                // If the prefix becomes empty, there's no common prefix
                if (prefix.empty()) return "";
            }
        }
        
        return prefix;

        
    }
};