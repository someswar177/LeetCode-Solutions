class Solution {
public:
    int paths(vector<vector<int>>& dp,int m,int n){
        if(m==0&&n==0) return 1;
        if(m<0 || n<0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        int left=paths(dp,m,n-1);
        int right=paths(dp,m-1,n);
        return dp[m][n]=left+right;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return paths(dp,m-1,n-1);        
    }
};