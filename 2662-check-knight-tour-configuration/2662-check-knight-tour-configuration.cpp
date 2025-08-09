class Solution {
public:
    bool check(vector<vector<int>>& grid, int count, int i, int j) {
        int n = grid.size();
        if (count == n * n - 1) return true;

        // All 8 possible knight moves
        if (i-2 >= 0 && j+1 < n && grid[i-2][j+1] == count+1)
            return check(grid, count+1, i-2, j+1);
        
        if (i-2 >= 0 && j-1 >= 0 && grid[i-2][j-1] == count+1)
            return check(grid, count+1, i-2, j-1);
        
        if (i+2 < n && j+1 < n && grid[i+2][j+1] == count+1)
            return check(grid, count+1, i+2, j+1);
        
        if (i+2 < n && j-1 >= 0 && grid[i+2][j-1] == count+1)
            return check(grid, count+1, i+2, j-1);
        
        if (i+1 < n && j-2 >= 0 && grid[i+1][j-2] == count+1)
            return check(grid, count+1, i+1, j-2);
        
        if (i-1 >= 0 && j-2 >= 0 && grid[i-1][j-2] == count+1)
            return check(grid, count+1, i-1, j-2);
        
        if (i+1 < n && j+2 < n && grid[i+1][j+2] == count+1)
            return check(grid, count+1, i+1, j+2);
        
        if (i-1 >= 0 && j+2 < n && grid[i-1][j+2] == count+1)
            return check(grid, count+1, i-1, j+2);

        return false; // No valid move found
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        // Must start at top-left with 0
        if (grid[0][0] != 0) return false;
        return check(grid, 0, 0, 0);
    }
};