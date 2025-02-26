class Solution {
public:
    void mergeSort(vector<int>& arr,int low,int mid,int high){
        int left=low;
        int right=mid+1;
        vector<int> temp;
        while(left<=mid && right<=high){
            if(arr[left]<arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    }
    int countPairs(vector<int>&arr,int low,int mid,int high){
        int right=mid+1,count=0;
        for(int i=low;i<=mid;i++){
            while(right<=high && arr[i]>(2LL*arr[right])) right++;
            count+=right-(mid+1);
        }
        return count;
    }
    int merge(vector<int>& arr,int low,int high){
        int count=0;
        if(low>=high) return count;
        int mid=(low+high)/2;
        count+=merge(arr,low,mid);
        count+=merge(arr,mid+1,high);
        count+=countPairs(arr,low,mid,high);
        mergeSort(arr,low,mid,high);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        return merge(nums,0,nums.size()-1);        
    }
};