class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        string t=s;
        sort(t.begin(),t.end());
        if(t==s) return 0;
        if(n==2&&t!=s) return -1;
        if(s[0]==t[0]||s[n-1]==t[n-1]) return 1;
        if(t[0]==t[1]||t[n-1]==t[n-2]) return 2;
        if(s[0]==t[n-1]&&s[n-1]==t[0]) return 3;
        else{
            return 2;
        }
    }
};