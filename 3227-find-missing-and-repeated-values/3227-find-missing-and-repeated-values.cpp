class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int N = n * n;
        vector<int> count(N + 1, 0);
        int duplicate = -1, missing = -1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                count[grid[i][j]]++;
            }
        }

        for (int i = 1; i <= N; i++) {
            if (count[i] == 2) duplicate = i;
            if (count[i] == 0) missing = i;
        }

        return {duplicate, missing};
    }
};