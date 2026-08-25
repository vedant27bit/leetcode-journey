class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int w = 0;
        int count = 0;

        for(int num:nums){
            if(count == 0){
                w = num;
            }

            if(w == num){
                count++;
            }
            else{
                count--;
            }
        }
        return w;
        
    }
};