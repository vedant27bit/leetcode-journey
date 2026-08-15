class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        
        bool hasNonZero = false;
        int xors = 0;

        for(int i = 0 ; i <  nums.size() ; i++){

            xors ^= nums[i];

            if(nums[i] != 0){
                hasNonZero = true;
            }
        }

        if(xors != 0){
            return nums.size();
        }
         if(hasNonZero){
            return nums.size() - 1;
        }
        return 0;
    }
        
};