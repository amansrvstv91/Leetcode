class Solution {
public:
    bool detectCapitalUse(string word) {
        for (int i = 1; i < word.length(); i++) {
            if (islower(word[0]) && isupper(word[i])) {
                return false;
            }
            if (i > 1 && isupper(word[i]) != isupper(word[1])) {
                return false;
            }
        }
        return true;
    }
};