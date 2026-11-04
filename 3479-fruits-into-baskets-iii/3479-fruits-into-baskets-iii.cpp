class Solution {
    vector<int> a;
    void construct(int node,int l,int r,vector<int>& baskets){
            if(l==r){
                a[node]=baskets[l];
                return ;
            }
            int mid=(l+r)/2;
            construct(2*node+1,l,mid,baskets);
            construct(2*node+2,mid+1,r,baskets);
            a[node]=max(a[2*node+1],a[2*node+2]);

        }
      bool placed(int node,int l,int r,vector<int>& baskets,int val){
        if(a[node]<val) return false;
        if(l==r){
            a[node]=-1;
            return true;
        }
        bool f1;
        bool f2;
        int mid=(l+r)/2;
        if(a[2*node+1]>=val){
            f1=placed(2*node+1,l,mid,baskets,val);
        }
        else{
            f2=placed(2*node+2,mid+1,r,baskets,val);
        }
        a[node]=max(a[2*node+1],a[2*node+2]);
        return f1|f2;
      }
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int m=baskets.size();
        a.resize(4*m);
        int cnt=0;
        construct(0,0,m-1,baskets);
        for(int i=0;i<n;i++){
            if(placed(0,0,m-1,baskets,fruits[i])==false){
                cnt++;
            }
        }
        return cnt;
    }
};