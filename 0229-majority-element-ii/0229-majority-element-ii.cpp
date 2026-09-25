class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>um;
        vector<int>ans;

        for(int x:nums){
            um[x]++;
        }

    for(auto x:um){
            if(x.second > nums.size()/3){
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};