class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> occ;
        for (char c : s) {
            occ[c]++;
        }

        // Create a vector of pairs (char, frequency)
        vector<pair<char, int>> freq(occ.begin(), occ.end());

        // Sort by frequency descending
        sort(freq.begin(), freq.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        string ans;
        for (auto &p : freq) {
            ans.append(p.second, p.first); // append character 'p.first' p.second times
        }

        return ans;
    }
};