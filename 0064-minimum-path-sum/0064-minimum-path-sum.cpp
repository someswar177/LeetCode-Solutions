class Solution {
public:
    int ans(vector<vector<int>>& grid,int m,int n,vector<vector<int>>& dp){
        if(m<0||n<0) return 1e9;
        if(m==0&&n==0) return grid[m][n];
        if(dp[m][n]!=-1) return dp[m][n];
        int left=grid[m][n]+ans(grid,m,n-1,dp);
        int top=grid[m][n]+ans(grid,m-1,n,dp);
        return dp[m][n]=min(left,top);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();        
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return ans(grid,m-1,n-1,dp);        
    }
};