class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int max_val = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            int min_val = INT_MAX;
            max_val = max(max_val, nums[i]);

            for (int j = i; j < nums.size(); j++) {
                if (nums[j] < min_val) {
                    min_val = nums[j];
                }
            }

            if (max_val - min_val <= k) {
                return i;
            }
        }

        return -1;
    }
};