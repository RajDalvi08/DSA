class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int lastSpaceIndex = -1;

        for (int strIndex = 0; strIndex <= n; strIndex++) {
            if (strIndex == n || s[strIndex] == ' ') {
                int start = lastSpaceIndex + 1;
                int end = strIndex - 1;
                while (start < end) {
                    swap(s[start], s[end]);
                    start++;
                    end--;
                }
                lastSpaceIndex = strIndex;
            }
        }
        return s;
    }
};