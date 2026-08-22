class Solution {
public:
    bool checkDivisibility(int n) {
        
        string w = "";

        w = to_string(n);
        int sum = 0;
        int product = 1;

        for(int i = 0 ; i < w.size(); i++){
            sum += w[i] - '0';
            product *= w[i] - '0';
        }

        return n % (sum + product) == 0;
    }
};