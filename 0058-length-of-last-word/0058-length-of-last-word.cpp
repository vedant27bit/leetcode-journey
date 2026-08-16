class Solution {
public:
    int lengthOfLastWord(string s) {
        string w = "";

        for(int i = s.length() - 1; i >= 0; i--){
            if(s[i] != ' '){
                w += s[i];

                if(i > 0 && s[i-1] == ' '){
                    break;
                }
            }
        }

        return w.length();
    }
};