class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int> unique(nums.begin(),nums.end());
        nums.assign(unique.begin(),unique.end());
        
        return unique.size();
    }
};