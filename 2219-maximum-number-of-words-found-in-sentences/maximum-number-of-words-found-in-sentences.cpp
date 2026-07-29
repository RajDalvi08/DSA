class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxwords = 0;

        for (string &sentence : sentences) {
            int wordCount = 1; // At least one word in every sentence

            for (char ch : sentence) {
                if (ch == ' ') {
                    wordCount++;
                }
            }

            maxwords = max(maxwords, wordCount);
        }

        return maxwords;
    }
};