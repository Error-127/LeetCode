class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> b;
        vector<int> a(1,1);
        b=a;
        for(int i=1;i<=rowIndex;i++){
            a.resize(i+1);
            a[0]=1;
            a[i]=1;
            for(int k=0;k<i-1;k++){
                a[k+1]=b[k]+b[k+1];
            }
            b=a;
        }
        return a;
    }
};