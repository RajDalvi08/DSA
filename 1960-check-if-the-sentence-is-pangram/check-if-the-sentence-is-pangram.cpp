class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> seen(26, false);

        for (char ch : sentence) {
            seen[ch - 'a'] = true;
        }

        for (bool letter : seen) {
            if (!letter) return false;
        }

        return true;
    }
};