class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        

        for(int i = 0 ; i < nums.size() ; i++){
            int sum = 0;
            string w = "";
            w = to_string(nums[i]);
            for(char x:w){
                sum += x - '0';
            }

            if(i == sum){
                return i;
            }
        }

        return -1;
    }
};