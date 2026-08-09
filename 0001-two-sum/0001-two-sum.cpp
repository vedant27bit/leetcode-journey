class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v1;
        int k;

        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1; j < nums.size() ; j ++){
                if(target == nums[i]+nums[j]){
                    v1.push_back(i);
                    v1.push_back(j);      
                    break;        
                }
            }
        }

        return v1;
    }
};