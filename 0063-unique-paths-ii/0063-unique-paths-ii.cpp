class Solution {
public:
    int uniquePaths(vector<vector<int>>& arr,int m,int n,vector<vector<int>>& dp){
        if(m<0 || n<0 || arr[m][n]==1) return 0;
        if(m==0&&n==0) return 1;
        if(dp[m][n]!=-1) return dp[m][n];
        int left = uniquePaths(arr,m,n-1,dp);
        int right = uniquePaths(arr,m-1,n,dp);
        return dp[m][n]=left+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return uniquePaths(obstacleGrid,m-1,n-1,dp);        
    }
};