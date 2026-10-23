class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int m=n/3;
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<int> a;
        for(auto it:mpp){
            if(it.second>m){
                a.push_back(it.first);
            }
        }
        return a;
    }
};