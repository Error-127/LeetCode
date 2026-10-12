class Solution {
public:
    bool threeFibonacciSum(int n) {
        int i=0;
        int j=1;
        while(true){
            int val=i+j;
            int fval=val+i+j;
            if(fval==n) return true;
            if(fval>n) break;
            i=j;
            j=val;
        }
        return false;
    }
};