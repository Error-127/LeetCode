class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s="";
        if(sum>num*9) return s;
        while(sum>9){
            s.push_back('9');
            sum=sum-9;
        }
        s+=to_string(sum);
        int len=s.size();
        while(len!=num){
            s.push_back('0');
            len++;
        }
        return s;
    }
};