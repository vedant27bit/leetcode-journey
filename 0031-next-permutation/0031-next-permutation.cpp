class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        // 1. Find the first decreasing element from the right
        int i = n - 2;

        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // 2. If such an element exists
        if (i >= 0) {

            // Find the smallest element from the right
            // that is greater than nums[i]
            int j = n - 1;

            while (nums[j] <= nums[i]) {
                j--;
            }

            // 3. Swap
            swap(nums[i], nums[j]);
        }

        // 4. Reverse the part after i
        reverse(nums.begin() + i + 1, nums.end());
    }
};