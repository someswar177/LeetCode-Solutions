class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m+n-1,j=n-1,k=m-1;
        while(j>=0){
            if(k>=0 && nums1[k]>nums2[j]){
                nums1[i]=nums1[k];
                k--;
            }else{
                nums1[i]=nums2[j];
                j--;
            }
            i--;
        }        
    }
};