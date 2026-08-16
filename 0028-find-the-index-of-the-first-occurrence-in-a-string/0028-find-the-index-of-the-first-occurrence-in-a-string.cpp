class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = 0;
        

        for(int i = 0 ; i < haystack.length(); i++){

            int left =i;
            int right = i;
            string w = "";
            
            for(int j = i ; j < haystack.length(); j++){
                 w += haystack[j];
                if(w == needle){
                    return i;
                }
               
            }
            }

            return -1;
        }
    
};