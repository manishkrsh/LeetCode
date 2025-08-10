class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0; // position to write
        int i = 0;     // position to read

        while (i < n) {
            char curr = chars[i];
            int count = 0;

            // Count how many times curr repeats
            while (i < n && chars[i] == curr) {
                i++;
                count++;
            }

            // Write the character
            chars[write++] = curr;

            // Write the count if > 1
            if (count > 1) {
                string cntStr = to_string(count); // handles multi-digit
                for (char ch : cntStr) {
                    chars[write++] = ch;
                }
            }
        }
        return write; // new length after compression
    }
};