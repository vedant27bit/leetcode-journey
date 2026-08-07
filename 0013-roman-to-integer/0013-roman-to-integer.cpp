class Solution {
public:
    int romanToInt(string s) {

        int w = 0;

        for(int i = 0;i < s.length();i++){
            
            if( i > 0 && s[i-1]=='I' && (s[i] == 'V' || s[i] == 'X')){
                w += integervalue(s[i]) - 2;
            }
            else if(i > 0 && s[i-1]=='X' && (s[i] == 'L' || s[i] == 'C')){
                w += integervalue(s[i]) - 20;
            }
            else if(i > 0 && s[i-1]=='C' && (s[i] == 'D' || s[i] == 'M')){
                w += integervalue(s[i]) - 200;
            }
            else{
                w += integervalue(s[i]);
            }
        }

        return w;
    }

    int integervalue(char a){
            if(a == 'I'){
                return 1;
            }
            else if(a == 'V'){
                return 5;
            }
            else if(a == 'X'){
                return 10;
            }   
            else if(a == 'L'){
                return 50;
             }
            else if(a == 'C'){
                return 100;
            }
            else if(a == 'D'){
                return 500;
            }
            else if(a == 'M'){
                return 1000;
             }
            else{
                return -1;
            }

    }
};