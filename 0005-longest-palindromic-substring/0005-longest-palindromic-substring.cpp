class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";

        int start = 0;   // index of best palindrome
        int maxLen = 1;  // at least one character is a palindrome

        // Helper lambda to expand around center
        auto expand = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }
            // Return length of palindrome
            return right - left - 1;
        };

        for (int i = 0; i < n; i++) {
            int len1 = expand(i, i);       // odd length
            int len2 = expand(i, i + 1);   // even length
            int len = max(len1, len2);

            if (len > maxLen) {
                maxLen = len;
                start = i - (len - 1) / 2;
            }
        }

        return s.substr(start, maxLen);
    }
};