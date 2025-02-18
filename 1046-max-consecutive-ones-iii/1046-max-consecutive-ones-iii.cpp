class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,maxLength=0,zeroes=0,n=nums.size();
        // while(r<n){
        //     if(nums[r]==0) zeroes++;
        //     while(zeroes>k){
        //         if(nums[l]==0) zeroes--;
        //         l++;
        //     }
        //     if(zeroes<=k){
        //         maxLength=max(maxLength,r-l+1);
        //     }
        //     r++;
        // }
        while(r<n){
            if(nums[r]==0) zeroes++;
            if(zeroes<=k){
                maxLength=max(maxLength,r-l+1);
            }else{
                if(nums[l]==0) zeroes--;
                l++;
            }
            r++;
        }
        return maxLength;        
    }
};