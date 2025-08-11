class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        long long N = 1LL * n * n;

        long long S = N * (N + 1) / 2; // expected sum
        long long SQ = N * (N + 1) * (2 * N + 1) / 6; // expected sum of squares

        long long S_actual = 0, SQ_actual = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                long long val = grid[i][j];
                S_actual += val;
                SQ_actual += val * val;
            }
        }

        long long diff = S_actual - S; // x - y
        long long sq_diff = SQ_actual - SQ; // x^2 - y^2

        long long sum_xy = sq_diff / diff; // x + y

        long long x = (diff + sum_xy) / 2;
        long long y = x - diff;

        return {(int)x, (int)y};
    }
};