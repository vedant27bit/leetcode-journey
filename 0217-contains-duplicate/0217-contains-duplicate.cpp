class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        vector<int> visited(100000, 0);

        for(int i = 0 ; i < nums.size() ; i++){
            visited[nums[i]]++;

            if(visited[nums[i]] > 1){
                return true;
            }
        }
        return false;
    }
};