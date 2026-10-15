class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            map<int,int> mpp;
            for(int j=i;j<n;j++){
                mpp[nums[j]]++;
                sum+=(mpp.size())*(mpp.size());
            }
        }
        return sum;
    }
};