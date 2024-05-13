#include<stdio.h>
#define MAX 1000000007
long long a[200005],seg[4*200005];
void build(int ind,int low,int high){
    if(low==high){
        seg[ind]=a[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);
    if(seg[2*ind+1]<seg[2*ind+2]) seg[ind]=seg[2*ind+1];
    else seg[ind]=seg[2*ind+2];
}
long long query(int ind,int low,int high,int l,int r){
    if(low>=l && r>=high) return seg[ind];
    if(low>r || l>high) return MAX;
    int mid=(low+high)/2;
    long long left=query(2*ind+1,low,mid,l,r);
    long long right=query(2*ind+2,mid+1,high,l,r);
    if(left<right) return left;
    else return right;
    
}
int main(){
    int n,q,l,r;
    scanf("%d %d",&n,&q);
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    build(0,0,n-1);
    for(int i=1;i<=q;i++){
        scanf("%d %d",&l,&r);
        printf("%lld\n",query(0,0,n-1,l-1,r-1));
    }
}