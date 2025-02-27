class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int arr[3]={0,0,0};
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }        
        for(int i=0;i<n;i++){
            if(arr[0]!=0){
                nums[i]=0;
                arr[0]--;
            }else if(arr[0]==0 && arr[1]!=0){
                nums[i]=1;
                arr[1]--;
            }else if(arr[0]==0 && arr[1]==0 && arr[2]!=0){
                nums[i]=2;
                arr[2]--;
            }
        }        
    }
};