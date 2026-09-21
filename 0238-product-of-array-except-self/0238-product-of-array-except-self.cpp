class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans;
        int w1 = 1;
        int w2 = 1;
        int count = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] == 0){
               w2 = w2 * nums[i];
               count++;
            }
            else{
                w1 = w1 * nums[i];
                w2 = w2 * nums[i];
            }
            

        }
        int w3;
        for(int i = 0 ; i < nums.size(); i++){
           if(count > 1){
                vector<int>answ (nums.size(),0);
                return answ;
           }
            if(nums[i] == 0){
                 ans.push_back(w1);
            }
            else{
                w3 = w2/nums[i];
                ans.push_back(w3);
            }
            
        }

        return ans;
    }
};