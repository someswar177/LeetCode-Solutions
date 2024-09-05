class Solution {
    private:
    int robbed(int circle,int index,vector<int>& nums,vector<int>& dp){
        if(index==circle) return nums[index];
        if(index<circle) return 0;
        if(dp[index]!=-1) return dp[index];
        int pick = nums[index]+robbed(circle,index-2,nums,dp);
        int notPick = 0+robbed(circle,index-1,nums,dp);
        return dp[index]=max(pick,notPick);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);
        int first = robbed(1,n-1,nums,dp1);
        int last = robbed(0,n-2,nums,dp2);
        return max(first,last);        
    }
};