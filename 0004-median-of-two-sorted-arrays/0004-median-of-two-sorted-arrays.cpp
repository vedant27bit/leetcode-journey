class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double w = 0;
        vector<int>w1;
            int i = 0;
            int j = 0;
        while(i < nums1.size() && j < nums2.size()){
 

            if(nums1[i] <= nums2[j]){
                w1.push_back(nums1[i]);
                i++;
            }
            else{
                w1.push_back(nums2[j]);
                j++;
            }
        }

        while( i < nums1.size()){
             w1.push_back(nums1[i]);
            i++;
        }
        while( j < nums2.size()){
             w1.push_back(nums2[j]);
                j++;
        }

        int sizeofw = w1.size();
        double ans = 0.00;

        if(sizeofw%2 == 0){
            int index1 = (sizeofw)/2;
            int index2 = index1-1;
            ans = (w1[index1] + w1[index2])/2.0;
        }else{
            int index1 = (sizeofw)/2.0;
            ans = (w1[index1]);
        }

    return ans;

        


    }


};