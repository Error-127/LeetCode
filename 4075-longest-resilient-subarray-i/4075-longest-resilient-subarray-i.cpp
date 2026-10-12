class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int len=1;
        vector<int> a;
        for(int i=0;i<n;i++){
            a.push_back(nums[i]%k);
        }
        for(int i=0;i<n;i++){
            int sum=0;
            int j=i;
            while(j<n&&a[i]==a[j]){
                sum+=a[j];
                 if((sum-a[i])%k==0){
                len=max(len,j-i+1);
            }
                j++;
            }
            if((sum-a[i])%k==0){
                len=max(len,j-i);
            }
            i=j-1;
        }
        return len;
    }
};