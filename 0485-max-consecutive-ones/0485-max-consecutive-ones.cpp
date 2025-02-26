class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLength=0;
        int length=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&1){
                length++;
                maxLength=max(length,maxLength);
            }else length=0;
        }
        return maxLength;        
    }
};