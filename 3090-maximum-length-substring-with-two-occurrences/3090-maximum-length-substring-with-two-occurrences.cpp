class Solution {
public:
    int maximumLengthSubstring(string s) {
        
        int len = 0;
        

        for(int  i = 0 ; i < s.length() ; i++){
            int left = i;
            vector<int> freq (26,0);
            
            for(int right = i ; right <  s.length() ; right++){

                freq[s[right] - 'a']++;

                if(freq[s[right] - 'a'] > 2){
                    break;
                }

                len = max(len,right - left + 1);
            }
            
            
            
        }
        return len;
    }
};