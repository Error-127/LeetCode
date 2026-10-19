class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;){
            int val=-(nums[i]);
            int val1=nums[i];
            
            int j=i+1;
            int k=n-1;
            int sum=0;
            while(j<k){
                sum=nums[j]+nums[k];
                int val2=nums[j];
                int val3=nums[k];
                if(sum==val){
                    ans.push_back({val1,nums[j],nums[k]}); 
                    while(j<k&&val2==nums[j]){
                        j++;
                    }
                    while(k>j&&val3==nums[k]){
                        k--;
                    }
                }
                else if(sum>val){
                    k--;
                }
                else{
                    j++;
                }
            }
            while(i<n&&val1==nums[i]){
                i++;
            }
            
        }
        
        return ans;
    }
};