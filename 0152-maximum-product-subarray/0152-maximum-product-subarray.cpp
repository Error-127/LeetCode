class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> pre(n);
        vector<int> suff(n);
        int pro=1;
        for(int i=0;i<n;i++){
            pro=pro*nums[i];
            if(pro==0){
                pre[i]=0;
                pro=1;
            }
            else{
                pre[i]=pro;
            }
        }
        pro=1;
        for(int i=n-1;i>=0;i--){
            pro=pro*nums[i];
            if(pro==0){
                suff[i]=0;
                pro=1;
            }
            else{
                suff[i]=pro;
            }

        }
        int maxi=-1e9;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                maxi=max({maxi,pre[i],suff[i]});
            }
            else{
                maxi=max(maxi,pre[i]);
               if(i==0){
                maxi=max(maxi,suff[i+1]);
               }
               else if(i==n-1){
                maxi=max(maxi,pre[i-1]);
               }
               else{
                maxi=max({maxi,pre[i-1],suff[i+1]});
               }
            }
        }
        return maxi;
    }
};