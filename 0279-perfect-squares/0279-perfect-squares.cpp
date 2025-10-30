class Solution {
public:
    bool isPerfectSquare(int x) {
        int s = sqrt(x);
        return s * s == x;
    }

    int numSquares(int n) {
        if (isPerfectSquare(n)) return 1;

        // Reduce n by removing factors of 4
        while (n % 4 == 0) n /= 4;

        // Check condition of 4^a * (8b + 7)
        if (n % 8 == 7) return 4;

        // Check if n can be expressed as sum of two squares
        for (int i = 1; i * i <= n; i++) {
            if (isPerfectSquare(n - i * i)) return 2;
        }

        // Otherwise, answer is 3
        return 3;
    }
};