class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
       int n=nums.size();
       long long sum=accumulate(nums.begin(),nums.end(),0LL);
       vector<int> b;
       for(int i=0;i<n;i++){
        string s=to_string(nums[i]);
        sort(s.begin(),s.end());
        reverse(s.begin(),s.end());
        b.push_back(stoi(s)-nums[i]);
       }
       sort(b.begin(),b.end(),greater<int>());
       for(int i=0;i<k;i++){
          if(b[i]>0){
            sum+=b[i];
          }
       }
       return sum;
    }
};