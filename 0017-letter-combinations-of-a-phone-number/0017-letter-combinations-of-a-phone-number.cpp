class Solution {
public:
    vector<string> letterCombinations(string digits) {
       
       vector<string> result = {""};

       vector<string> numpad = {
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
       };

       for (char digit : digits){

            int num = digit - '0';

            vector<string>newresult;

            for(string current : result){
                for(char letter : numpad[num]){
                    newresult.push_back(current + letter);
                }
            }

            result = newresult;
       }
       
       return result;
       }
};