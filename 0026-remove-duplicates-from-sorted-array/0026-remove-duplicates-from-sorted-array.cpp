class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=0;
        int n=nums.size();
        while(j<n){
            nums[i]=nums[j];
            int val=nums[j];
            while(j<n&&nums[j]==val){
                j++;
            }
            i++;
        }
        return i;
    }
};