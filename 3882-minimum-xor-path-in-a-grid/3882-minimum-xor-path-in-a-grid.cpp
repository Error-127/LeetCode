class Solution {
    int rec(int i,int j,vector<vector<int>>& grid,int n,int m,int val,vector<vector<vector<int>>>& dp){
        // if(i==n-1&&j==m-1){
        //     return grid[i][j];
        // }
         if(i>=n) return 1e9;
         if(j>=m) return 1e9;
         val=val^grid[i][j];
          if(i==n-1&&j==m-1){
             return val;
         }
         if(dp[i][j][val]!=-1){
            return dp[i][j][val];
         }
       int left=rec(i+1,j,grid,n,m,val,dp);
       int right=rec(i,j+1,grid,n,m,val,dp);
       return dp[i][j][val]=min(left,right);
    }
public:
    int minCost(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(1024,-1)));
       return rec(0,0,grid,n,m,0,dp);
    }
};