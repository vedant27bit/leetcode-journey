class Solution {
public:
    int reverse(int x) {
       
        string w1 = to_string(x);
        string w = "";

    if(w1[0] == '-'){
        w += '-';
        for(int i = w1.length() - 1 ; i >= 1 ; i--){
            w += w1[i];
        }
    }
    else{
        for(int i = w1.length() - 1 ; i >= 0 ; i--){
            w += w1[i];
        }
    }   
   
        
        long long n = stoll(w);

         if(n > INT_MAX || n < INT_MIN){
        return 0;
    }

        return (int)n;
        
    }
};