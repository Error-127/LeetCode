class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int ind=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ind=i;
                break;
            }
        }
        bool flag=true;
        int ans=0;
        if(nums[ind]+1==nums[(ind+1)%n]){
            for(int i=0;i<n-1;i++){
                if(nums[(ind+i)%n]+1!=nums[(ind+i+1)%n]){
                    flag=false;
                }
            }
           ans=min(ind,(n-ind)+2);
        }
        else{
           for(int i=0;i<n-1;i++){
            if(nums[(n+ind-i)%n]+1!=nums[(n+ind-i-1)%n]){
                flag=false;
            }
           }
           ans=min(ind+2,n-ind);
        }
        if(flag==false){
            return -1;
        }
        return ans;
    }
};