class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n=nums.size();
        int maxi=-1e9;
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    if(nums[i]+nums[j]==target&&nums[i]>nums[j]&&maxi<nums[i]*nums[j]){
                        maxi=nums[i]*nums[j];
                        ans.clear();
                        ans.push_back(i);
                        ans.push_back(j);
                    }
                }
            }
        }
        if(ans.size()==0) return {-1,-1};
        return ans;
    }
};