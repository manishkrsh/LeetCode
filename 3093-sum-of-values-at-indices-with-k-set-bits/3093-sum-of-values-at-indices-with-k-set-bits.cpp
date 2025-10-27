class Solution {
public:
    
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n &= (n - 1); // Brian Kernighan’s algorithm
        count++;
    }
    return count;
}

int sumIndicesWithKSetBits(vector<int>& nums, int k) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (countSetBits(i) == k)
            sum += nums[i];
    }
    return sum;
}
};