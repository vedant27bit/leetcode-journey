class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int r = matrix.size();
        int c = matrix[0].size();

        int low = 0;
        int high = (r*c) - 1;

        int mid = 0;

        while(high >= low){

        
            mid = low + (high - low)/2;
            int value = matrix[mid /c][mid % c];

            if(target < value){
                high = mid - 1;
            }
            else if(target > value){
                low = mid + 1;
            }
            else {
                return true;
            }
        }

        return false;

    }
};