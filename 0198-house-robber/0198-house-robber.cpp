class Solution {
    private:
    int robbed(int index,vector<int>& nums,vector<int>& dp){
        if(index==0) return nums[index];
        if(index<0) return 0;
        if(dp[index] != -1) return dp[index];
        int pick = nums[index]+ robbed(index - 2,nums,dp);
        int notPick = 0+robbed(index-1,nums,dp);
        return dp[index]=max(pick,notPick);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return robbed(n-1,nums,dp);
    }
};