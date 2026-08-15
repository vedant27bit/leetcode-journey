class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string w = "";

        for(int i = 0; i < strs[0].size(); i++) {

            for(int j = 1; j < strs.size(); j++) {

                if(strs[j][i] != strs[0][i]) {
                    return w;
                }
            }

            w += strs[0][i];
        }

        return w;
    }
};