#include<stdio.h>
long long seg[4*200005];
void update(int ind,int low,int high,int k){
    if(low==high){
        seg[ind]++;
        return;
    }
    int mid=(low+high)/2;
    if(k<=mid) update(2*ind+1,low,mid,k);
    else update(2*ind+2,mid+1,high,k);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}
long long query(int ind, int low, int high, int l, int r){
    if(low>=l && r>=high) return seg[ind];
    if(low>r || l>high) return 0;
    int mid=(low+high)/2;
    return query(2*ind+1,low,mid,l,r)+query(2*ind+2,mid+1,high,l,r);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x,sum=0;
        scanf("%lld",&n);
        for(int i=0;i<=4*n;i++) seg[i]=0;
        for(int i=0;i<n;i++) {
            scanf("%lld",&x);
            sum+=query(0,0,n,x,n);
            update(0,0,n,x);
        }
        printf("%lld\n",sum);
    }
}