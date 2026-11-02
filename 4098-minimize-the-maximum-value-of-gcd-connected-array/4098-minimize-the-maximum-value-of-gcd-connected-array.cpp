class Solution {
public:
    long long minimumMaxValue(int n, int index, int value) {
        int val=value;
        if(index==0&&value==1) return -1;
        for(int i=2;i*i<=value;i++){
            if(value%i==0){
                val=i;
                break;
            }
        }
        long long val1=value-val-2*(index-1);
        long long final=1LL*value+val+2LL*(n-1-index-1);
        if(index==0) return final;
        if(index==n-1&&val1>0) return value;
        if(val1<=1) return -1;
        return final;
       
    }
};