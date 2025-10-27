class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> mp;

        // store each character's index from string s
        for (int i = 0; i < s.size(); i++)
            mp[s[i]] = i; 

        int ans = 0;

        // calculate total absolute index difference
        for (int i = 0; i < t.size(); i++)
            ans += abs(mp[t[i]] - i);

        return ans;
    }
};