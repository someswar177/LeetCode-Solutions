class Solution {
public:
    int allSubarrays(vector<int>& nums,int k){
        if(k==0) return 0;
        int l=0,r=0,count=0,n=nums.size();
        unordered_map<int,int> hash;
        while(r<n){
            hash[nums[r]]++;
            while(hash.size()>k){
                hash[nums[l]]--;
                if(hash[nums[l]]==0) hash.erase(nums[l]);
                l++;
            }
            count += r-l+1;
            r++;            
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int result = allSubarrays(nums,k) - allSubarrays(nums,k-1);
        return result;     
    }
};