class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int n = str.length();
        string s = "";
        int index = 0;

        for(int i = n - 1 ; i >= 0 ; i--){
            s += str[i];
        }

        if(s == str){
            return true;
        }
        else{
            return false;
        }
        }
    
};