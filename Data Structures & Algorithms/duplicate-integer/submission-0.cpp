class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
        }

        if (count >= 1) {
            return true;
        }
        else {
            return false;
        }
    }
};