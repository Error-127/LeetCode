class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int ans=1e9;
        for(int i=0;i<nums.size();i++){
            string s1=to_string(nums[i])+to_string(nums[i+1]);
            ans=min(ans,stoi(s1));
            i++;
        }
        return ans;
    }
};