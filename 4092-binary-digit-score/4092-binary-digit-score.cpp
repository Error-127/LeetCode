class Solution {
public:
    int calculateScore(int a, int b) {
        int a1=0;
        while(a!=0){
            if(a&1==1){
                a1++;
            }
            a=a>>1;
        }
        int a2=0;
        while(b!=0){
            if(b&1==1){
                a2++;
            }
            b=b>>1;
        }
        if(a1>=a2){
            return a1*a2;
        }
        return a2/a1;
       
    }
};