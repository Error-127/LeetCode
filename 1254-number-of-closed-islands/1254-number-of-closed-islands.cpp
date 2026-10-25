class Solution {
    void dfs(int i,int j,vector<vector<int>>& vis,vector<vector<int>>& grid,int n,int m){
        vis[i][j]=1;
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
        for(int k=0;k<4;k++){
            int nrow=i+row[k];
            int ncol=j+col[k];
            if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&grid[nrow][ncol]==0&&vis[nrow][ncol]==0){
                dfs(nrow,ncol,vis,grid,n,m);
            }
        }
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(grid[i][0]==0&&vis[i][0]==0){
                dfs(i,0,vis,grid,n,m);
            }
            if(grid[i][m-1]==0&&vis[i][m-1]==0){
                dfs(i,m-1,vis,grid,n,m);
            }
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]==0&&vis[0][i]==0){
                dfs(0,i,vis,grid,n,m);
            }
            if(grid[n-1][i]==0&&vis[n-1][i]==0){
                dfs(n-1,i,vis,grid,n,m);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0&&vis[i][j]==0){
                    ans++;
                    dfs(i,j,vis,grid,n,m);
                }
            }
        }
        return ans;
    }
};