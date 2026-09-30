class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n < 1){
            return false;
        }

        if(n == 1){
            return true;
        }

        int product = n;
        for(int i = 0 ; product > 1 ; i++){
             if( product % 3 != 0){
                     return false;
                  }

           product = product / 3;

               
            }

            return true;
        }

};