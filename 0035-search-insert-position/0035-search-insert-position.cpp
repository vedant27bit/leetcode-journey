class Solution {
public:


    int searchInsert(vector<int>& nums, int target) {
       int size = (nums.size())/2 ;
        int min = -1;

       if(nums[size] <= target){
        for(int i = size ; i < nums.size() ; i++){
            if(nums[i] == target){
                return i;
            }
            else{
                if(nums[i] < target){
                    min = i;
                }
            }
        }
       }
       else if(nums[size] > target){
            for(int i = 0 ; i < size ; i++){
                if(nums[i] == target){
                break;
                return i;
            }
                else{
                if(nums[i] < target){
                    min = i;
                }
            }
        }
       }


       return min + 1;
       }
    
};