class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;  // where to write compressed result
        int i = 0;      // reading index

        while (i < n) {
            char curr = chars[i];
            int count = 0;

            // count how many times curr appears
            while (i < n && chars[i] == curr) {
                i++;
                count++;
            }

            // write the character
            chars[write++] = curr;

            // write the count if > 1
            if (count > 1) {
                string cntStr = to_string(count);
                for (char ch : cntStr) {
                    chars[write++] = ch;
                }
            }
        }

        return write;
    }
};