class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> a(1,1);
        ans.push_back(a);
        for(int i=1;i<numRows;i++){
            a.resize(i+1);
            a[0]=1;
            a[i]=1;
            for(int k=0;k<i-1;k++){
                a[k+1]=ans[i-1][k]+ans[i-1][k+1];
            }
            ans.push_back(a);
        }
        return ans;
    }
};