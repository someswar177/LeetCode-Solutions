class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // This problem aim is to count no of subarrays so no need to store the index values in hashmap(index values are important to find the length of subarray), instead we have to store freq to count no of subarrays.
        int sum=0,count=0;
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k) count++;
            if(hash.find(sum-k)!=hash.end()){
                count += hash[sum-k]; // to count all sub arrays we have to add the frequency of sum instead of increament to 1; to check it nums=[2,1,3,-3,1,1,1,3,4],k=3.
            }
            hash[sum]++;            
        }
        return count; 
    }
};