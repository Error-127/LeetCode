
class Solution {  
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;){
            int val6=nums[i];
            long long val=target-nums[i];
            for(int j=i+1;j<n;){
                int val5=nums[j];
                long long val2=val-nums[j];
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long sum=nums[k]+nums[l];
                    int val3=nums[k];
                    int val4=nums[l];
                    if(sum==val2){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        while(k<l&&nums[k]==val3){
                            k++;
                        }
                        while(k<l&&nums[l]==val4){
                            l--;
                        }
                    }
                    else if(sum>val2){
                        l--;
                    }
                    else{
                        k++;
                    }
                }
                while(j<n&&nums[j]==val5){
                    j++;
                }
            }
            while(i<n&&nums[i]==val6){
                i++;
            }
         
        }
        return ans;
    }
};