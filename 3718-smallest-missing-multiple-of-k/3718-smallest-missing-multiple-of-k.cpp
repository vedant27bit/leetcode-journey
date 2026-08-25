class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        for(int i = k ; i <= 200 ; i += k){

            bool found = false;

            for(int num: nums){
                if(num == i){
                    found = true;
                }
            }

            if(found !=true){
                return i;
            }
        }
        return 0;
    }
};