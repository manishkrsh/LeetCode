class Solution {
public:
    bool search(vector<int>& arr, int low, int high, int target) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) return true;
            else if (arr[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        for (int i = 0; i < mat.size(); i++) {
            // If target is in the range of this row
            if (target >= mat[i][0] && target <= mat[i].back()) {
                if (search(mat[i], 0, mat[i].size() - 1, target)) 
                    return true;
            }
        }
        return false;
    }
};