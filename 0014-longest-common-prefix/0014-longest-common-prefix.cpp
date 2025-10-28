class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) { // Check if prefix matches the start
                prefix.pop_back(); // Remove last char
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};