class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        
        for(int i = 0 ; i < ransomNote.length();i++){
            mp1[ransomNote[i]]++;
        }

        for(int i = 0 ; i < magazine.length();i++){
            mp2[magazine[i]]++;
        }

        for(int i = 0 ; i < ransomNote.length();i++){
            if(mp1[ransomNote[i]] <= mp2[ransomNote[i]]){
                continue;
            }
            else{
                return false;
            }
        }      

        return true;  
        
    }
};