#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long long result = 0;  // use long long to detect overflow
        int sign = 1;

        // 1️⃣ Skip leading spaces
        while (i < n && s[i] == ' ')
            i++;

        // 2️⃣ Handle sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        // 3️⃣ Convert digits
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            // 4️⃣ Clamp overflow
            if (result * sign >= INT_MAX) return INT_MAX;
            if (result * sign <= INT_MIN) return INT_MIN;

            i++;
        }

        // 5️⃣ Return final answer
        return (int)(result * sign);
    }
};