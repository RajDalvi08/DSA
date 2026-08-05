class Solution {
public:
    // Helper function to check if a string is a palindrome
    bool isPalindrome(const std::string& s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            if (isPalindrome(words[i])) {
                return words[i]; // Return the very first one found
            }
        }
        return ""; // Return empty string if no palindrome exists
    }
};