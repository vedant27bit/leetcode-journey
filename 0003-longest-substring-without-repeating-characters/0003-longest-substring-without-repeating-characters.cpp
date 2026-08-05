class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
       int n = s.length();
       int maxlen = 0;
       
       for(int i = 0 ; i < n ; i++){

         bool visited[256] = {false};

         for(int j = i ; j < n ; j++){
            if(visited[s[j]]){
                break;
            }

            visited[s[j]] = true;
            maxlen = max(maxlen,j - i + 1);
         }
       }

       return maxlen;

    }
};