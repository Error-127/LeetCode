class Solution {
   vector<int> dfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& vis,int n,int m){
        vis[i][j]=0;
        if(grid[i][j]=='R'){
            if(j==m-1){
                return {i,j};
            }
            else if(j<m-1&&vis[i][j+1]==0){
                return {i,j};
            }
            else{
               return dfs(i,j+1,grid,vis,n,m);
            }
        }
        if(grid[i][j]=='L'){
            if(j==0){
                return {i,j};
            }
            else if(j>0&&vis[i][j-1]==0){
                return {i,j};
            }
            else{
               return dfs(i,j-1,grid,vis,n,m);
            }
        }
        if(grid[i][j]=='U'){
            if(i==0){
                return {i,j};
            }
            else if(i>0&&vis[i-1][j]==0){
                return {i,j};
            }
            else{
               return dfs(i-1,j,grid,vis,n,m);
            }
        }
        if(grid[i][j]=='D'){
            if(i==n-1){
                return {i,j};
            }
            else if(i<n-1&&vis[i+1][j]==0){
                return {i,j};
            }
            else{
               return dfs(i+1,j,grid,vis,n,m);
            }
        }
        return {0};
    }
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,-1));
        int i=0;
        int j=0;
        return dfs(i,j,grid,vis,n,m);
    }
};