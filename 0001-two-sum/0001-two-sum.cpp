class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int remain = target-nums[i];
            if(hash.find(target-nums[i])!=hash.end()){
                return {hash[remain],i};
            }
            hash[nums[i]]=i;            
        }
        return {};
    }
};