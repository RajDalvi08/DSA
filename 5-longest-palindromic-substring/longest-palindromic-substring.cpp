class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        
        int start = 0;
        int maxLen = 0;

        // Helper lambda to expand around left and right bounds
        auto expand = [&](int left, int right) {
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                left--;
                right++;
            }
            // Length of valid palindrome is (right - 1) - (left + 1) + 1
            int len = right - left - 1;
            if (len > maxLen) {
                maxLen = len;
                start = left + 1;
            }
        };

        for (int i = 0; i < s.length(); i++) {
            expand(i, i);     // Odd-length palindromes (e.g., "aba")
            expand(i, i + 1); // Even-length palindromes (e.g., "abba")
        }

        return s.substr(start, maxLen);
    }
};