class Solution {
public:
    vector<string> createGrid(int m, int n) {
        string s1;
        string s2;
        for(int i=0;i<n;i++){
            s1.push_back('.');
        }
        for(int i=0;i<n-1;i++){
            s2.push_back('#');
        }
        s2.push_back('.');
        vector<string> ans;
        ans.push_back(s1);
        for(int i=1;i<m;i++){
            ans.push_back(s2);
        }
        return ans;
    }
};