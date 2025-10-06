class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // negative numbers are not palindromes
        
        long long rev = 0;
        int temp = x;
        
        // reverse the integer
        while (temp > 0) {
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }
        
        return rev == x; // compare reversed number with original
    }
};