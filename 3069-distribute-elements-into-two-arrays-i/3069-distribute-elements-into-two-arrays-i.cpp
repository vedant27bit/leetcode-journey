class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;

        int j = 0;
        int k = 0;

        for(int i = 0; i < nums.size() ; i++) {
           if( i == 0){
            int nt = nums[i];
            arr1.push_back(nt);
            j++;
           }
           else if( i == 1){
            int nt = nums[i];
            arr2.push_back(nt);
            k++;
           }
           else if(arr1[j - 1] > arr2[k - 1]){
            int nt = nums[i];
                arr1.push_back(nt);
                j++;
            }
            else if(arr1[j - 1] < arr2[k - 1]){
                int nt = nums[i];
                arr2.push_back(nt);
                k++;
            }
           }
            vector<int> w;
        for(int i = 0 ; i < arr1.size();i++){
            w.push_back(arr1[i]);
        }
        for(int i = 0 ; i < arr2.size();i++){
            w.push_back(arr2[i]);
        }

        return w;


        }
        
    };
