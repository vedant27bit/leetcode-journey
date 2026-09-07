class Solution {
public:
    bool isAnagram(string s, string t) {
        
       if(s.size()!=t.size()){
        return false;
       }

       unordered_map<char,int> w;

       for(char x:s){
        w[x]++;
       }

       for(char x:t){
        w[x]--;

        if(w[x] < 0){
            return false;
        }
       }
        return true;
       }
};