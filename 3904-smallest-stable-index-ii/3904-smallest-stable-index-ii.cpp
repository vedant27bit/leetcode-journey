class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> minm(n);
        minm[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            minm[i] = min(nums[i], minm[i + 1]);
        }

        int maxm = nums[0];

        for (int i = 0; i < n; i++) {
            maxm = max(maxm, nums[i]);

            if (maxm - minm[i] <= k)
                return i;
        }

        return -1;
    }
};