class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<bool> arr(n+1,true);
        vector<int> a;
        for(int i=2;i<=n;i++){
            if(arr[i]){
                a.push_back(i);
                for(int j=2*i;j<=n;j=j+i){
                    arr[j]=false;
                }
            }
        }
        vector<int> ans;
        sort(a.begin(),a.end());
        int sum=0;
        for(int i=0;i<a.size();i++){
            sum=sum+a[i];
            if(sum<=s){
                ans.push_back(a[i]);
            }
            else{
                break;
            }
        }
        return ans;
    }
};