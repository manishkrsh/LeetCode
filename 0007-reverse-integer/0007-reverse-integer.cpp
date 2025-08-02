#include <limits> // Required for INT_MAX and INT_MIN

class Solution {
public:
    int reverse(int x) {
        int reversed_num = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // Check for overflow BEFORE it happens
            // 1. If reversed_num > INT_MAX / 10, then reversed_num * 10 will surely overflow.
            // 2. If reversed_num == INT_MAX / 10, it will overflow if the next digit is > 7.
            if (reversed_num > INT_MAX / 10 || (reversed_num == INT_MAX / 10 && digit > 7)) {
                return 0;
            }

            // Check for underflow BEFORE it happens
            // 1. If reversed_num < INT_MIN / 10, then reversed_num * 10 will surely underflow.
            // 2. If reversed_num == INT_MIN / 10, it will underflow if the next digit is < -8.
            if (reversed_num < INT_MIN / 10 || (reversed_num == INT_MIN / 10 && digit < -8)) {
                return 0;
            }

            // Append the digit
            reversed_num = reversed_num * 10 + digit;
        }

        return reversed_num;
    }
};