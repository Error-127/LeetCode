class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n%2==1){
            int val=n/2;
            int ans=0;
            for(int i=0;i<n;i++){
                ans+=abs(nums[i]-nums[val]);
            }
            return ans;
        }
        else{
            int val=n/2;
            int val1=val-1;
            int ans1=0;
            int ans2=0;
            for(int i=0;i<n;i++){
                ans1+=abs(nums[i]-nums[val]);
            }
            for(int i=0;i<n;i++){
                ans2+=abs(nums[i]-nums[val1]);
            }
            return min(ans1,ans2);
        }
    }
};