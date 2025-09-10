class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n == 0) return 0;

        unordered_set<char> window;  // store current substring characters
        int left = 0, maxLen = 0;

        for(int right = 0; right < n; right++) {
            while(window.find(s[right]) != window.end()) {
                // remove leftmost char until s[right] becomes unique
                window.erase(s[left]);
                left++;
            }
            window.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};