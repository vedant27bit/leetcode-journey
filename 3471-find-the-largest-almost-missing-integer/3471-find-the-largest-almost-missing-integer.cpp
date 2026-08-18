class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
       
       vector<int>count(51,0);
        
       for(int i = 0 ; i <= nums.size() - k;i++){

            vector<bool>seen(51,false);

            for(int j = i ; j < i + k ; j++)
                seen[nums[j]] = true;

            for(int i = 0 ; i <= 50 ; i++){
                if(seen[i]){
                    count[i]++;
                }
            }
       }
        int maximum = -1;

       for(int i = 0 ; i <= 50 ; i++){
            if(count[i] == 1){
                maximum = max(maximum,i);
            }
       }

       return maximum;
    }
};