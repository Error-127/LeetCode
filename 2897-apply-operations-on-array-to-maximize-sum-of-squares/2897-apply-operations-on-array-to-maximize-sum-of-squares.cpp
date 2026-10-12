class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        int n=nums.size();
        long long mod=1e9+7;
        vector<int> cnt(32,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<32;j++){
                if(nums[i]&(1<<j)){
                    cnt[j]++;
                }
            }
        }
        long long ans=0;
        for(int i=0;i<k;i++){
            long long num=0;
            for(int j=0;j<32;j++){
                if(cnt[j]>0){
                    num=num|(1<<j);
                    cnt[j]--;
                }
            }
            ans=(ans+(num*num))%mod;
        }
        return ans;
    }
};