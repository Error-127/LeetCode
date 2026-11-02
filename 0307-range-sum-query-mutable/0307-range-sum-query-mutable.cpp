class NumArray {
public:

    int n;
    vector<int> a;
    void build(int node,int l,int r,vector<int>& nums){
        if(l==r){
            a[node]=nums[l];
            return ;
        }
        int mid=(l+r)/2;
        build(2*node+1,l,mid,nums);
        build(2*node+2,mid+1,r,nums);
        a[node]=a[2*node+1]+a[2*node+2];
    }

    void updatei(int node,int l,int r,int i,int val){
        if(l==r){
            a[node]=val;
            return ;
        }
        int mid=(l+r)/2;
        if(i<=mid){
            updatei(2*node+1,l,mid,i,val);
        }
        else{
            updatei(2*node+2,mid+1,r,i,val);
        }
        a[node]=a[2*node+1]+a[2*node+2];
    }
    int sum(int node,int l,int r,int left,int right){
        if(r<left||l>right) return 0;
        if(left<=l&&right>=r){
            return a[node];
        }
        int mid=(l+r)/2;
        int le=sum(2*node+1,l,mid,left,right);
        int ri=sum(2*node+2,mid+1,r,left,right);
        return le+ri;
    }
    NumArray(vector<int>& nums) {
        n=nums.size();
        a.resize(4*n);
        build(0,0,n-1,nums);
    }
    
    void update(int index, int val) {
        updatei(0,0,n-1,index,val);

    }
    
    int sumRange(int left, int right) {
        return sum(0,0,n-1,left,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */