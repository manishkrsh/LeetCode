class Solution {
public:
    string filterString(string s) {
        string result;
        result.reserve(s.size()); // reserve memory to avoid reallocations
        for (char c : s) {
            if (isalnum(c)) {  // keep alphabets & numbers
                result += tolower(c); // normalize case
            }
        }
        return result;
    }

    bool isPalindrome(string s) {
        s = filterString(s);
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};