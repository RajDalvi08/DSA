class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0;
        int other = 0;

        for (int num : nums) {
            if (num < 10)
                single += num;
            else
                other += num;
        }

        // Alice can choose either group
        return single != other;
    }
};