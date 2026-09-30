class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxdiff = 0;

        sort(nums.begin(),nums.end());

        for(int i = 0 ; i < nums.size() - 1; i++){
            int diff = nums[i+1] - nums[i];

            maxdiff = max(maxdiff,diff);
        }

        return maxdiff;
    }
};