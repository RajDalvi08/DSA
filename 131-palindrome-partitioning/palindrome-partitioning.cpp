class Solution {
public:
    
    bool isPalindrome(string s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right])
                return false;
            
            left++;
            right--;
        }
        return true;
    }

    void solve(string &s, int index, vector<string> &current,
               vector<vector<string>> &result) {
        
        // We have partitioned the entire string
        if (index == s.length()) {
            result.push_back(current);
            return;
        }

        // Try every possible substring
        for (int i = index; i < s.length(); i++) {
            
            // Only take it if it is a palindrome
            if (isPalindrome(s, index, i)) {
                
                // Choose
                current.push_back(s.substr(index, i - index + 1));

                // Explore
                solve(s, i + 1, current, result);

                // Backtrack
                current.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> current;

        solve(s, 0, current, result);

        return result;
    }
};