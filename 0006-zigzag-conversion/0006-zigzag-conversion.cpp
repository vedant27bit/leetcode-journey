class Solution {
public:
    string convert(string s, int numRows) {
        
        vector<string>result(numRows) ;

        if(numRows == 1 || numRows >= s.length()){
            return s;
        }

        int row = 0;    
        bool down = true;
        for(char ch : s){
            result[row] += ch;
            

            if(row == 0){
                down = true;
            }
            else if(row == numRows - 1){
                down = false;
            }

            if(down){
                row++;
            }
            else{
                row--;
            }
        }
            
            string w = "";
            for(string str : result){
                w += str;
            }

            
        
        return w;
    }
};