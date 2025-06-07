class Solution {
public:
   int climbStairsMemo(int n, vector<int> &dp) {
    if (n == 0 || n == 1) return 1;        // base case

    if (dp[n] != -1) return dp[n];         // already solved? return from dp

    // store the result in dp before returning
    dp[n] = climbStairsMemo(n - 1, dp) + climbStairsMemo(n - 2, dp);
    return dp[n];
}

int climbStairs(int n) {
    vector<int> dp(n + 1, -1);  // initialize dp with -1 meaning "not solved yet"
    return climbStairsMemo(n, dp);
}
};