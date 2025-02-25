class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        int i=j+1;
        while(j!=-1 && i<n){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
            i++;
        }
        // int zeroes=0;
        // int count=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0) zeroes++;
        //     else{
        //         nums[count]=nums[i];
        //         count++;
        //     }
        // }
        // for(int i=count;i<n;i++) nums[i]=0;                
    }
};