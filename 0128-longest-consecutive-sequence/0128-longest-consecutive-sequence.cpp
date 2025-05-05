class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(),nums.end());        
        int maxLength=0;
        for(int num:nums){
            if(numSet.find(num)==numSet.end()) continue;
            int length=1;
            numSet.erase(num);
            int prev=num-1;
            int next=num+1;
            while(numSet.find(prev)!=numSet.end()){
                numSet.erase(prev);
                length++;
                prev--;
            }
            while(numSet.find(next)!=numSet.end()){
                numSet.erase(next);
                length++;
                next++;
            }
            maxLength=max(length,maxLength);
        }
        return maxLength;      
    }
};