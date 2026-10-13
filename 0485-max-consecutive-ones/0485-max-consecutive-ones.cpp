class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        int i=0;
        int j=0;
        while(j<n){
            if(nums[j]==0){
                cnt=max(cnt,j-i);
                i=j+1;
            }
            j++;
        }
        cnt=max(cnt,j-i);
        return cnt;
    }
};