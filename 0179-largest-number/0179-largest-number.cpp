class Solution {
public:
    string largestNumber(vector<int>& nums) {
        // Convert all integers to strings
        vector<string> arr;
        for (int num : nums)
            arr.push_back(to_string(num));

        // Sort with custom comparator
        sort(arr.begin(), arr.end(), [](string &a, string &b) {
            return a + b > b + a;  // if true, a comes before b
        });

        // If the largest element is "0", answer is "0" (handles cases like [0,0])
        if (arr[0] == "0") return "0";

        // Join all strings
        string ans;
        for (string &s : arr) ans += s;

        return ans;
    }
};