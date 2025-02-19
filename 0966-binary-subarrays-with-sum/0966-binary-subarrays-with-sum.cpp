class Solution {
public:
    int findAllSubarrays(vector<int>& nums, int goal){
        int l=0,r=0,sum=0,count=0,n=nums.size();
        if(goal<0) return 0;
        while(r<n){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            count+=r-l+1;
            r++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int result = findAllSubarrays(nums,goal) - findAllSubarrays(nums,goal-1);
        return result;
        // int sum=0,count=0;
        // unordered_map<int,int> hash;
        // for(int i=0;i<nums.size();i++){
        //     sum+=nums[i];
        //     if(sum==goal) count++;
        //     if(hash.find(sum-goal)!=hash.end()){
        //         count += hash[sum-goal]; 
        //     }
        //     hash[sum]++;            
        // }
        // return count;
    }
};