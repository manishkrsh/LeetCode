class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());
        int result = 0;
        bool canType = true;

        for (int i = 0; i <= text.size(); i++) {
            if (i == text.size() || text[i] == ' ') { 
                // end of a word
                if (canType) result++;  // word is valid
                canType = true;         // reset for next word
            } 
            else if (broken.count(text[i])) {
                canType = false;  // mark word invalid if broken char found
            }
        }
        return result;
    }
};