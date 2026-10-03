class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> ans(n + 1);

        int power = 1;

        for(int i = 1; i <= n; i++) {

            if(i == power * 2) {
                power = i;
            }

            ans[i] = ans[i - power] + 1;
        }

        return ans;
    }
};