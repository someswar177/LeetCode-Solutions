class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        // int n=nums.size();
        // int arr[3]={0,0,0};
        // for(int i=0;i<n;i++){
        //     arr[nums[i]]++;
        // }        
        // for(int i=0;i<n;i++){
        //     if(arr[0]!=0){
        //         nums[i]=0;
        //         arr[0]--;
        //     }else if(arr[0]==0 && arr[1]!=0){
        //         nums[i]=1;
        //         arr[1]--;
        //     }else if(arr[0]==0 && arr[1]==0 && arr[2]!=0){
        //         nums[i]=2;
        //         arr[2]--;
        //     }
        // }        
    }
};