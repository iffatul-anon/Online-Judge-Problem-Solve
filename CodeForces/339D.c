#include<stdio.h>
#include<math.h>
long long a[200005],seg[4*200005],tem[200005];
void build(int ind, int low,int high){
    if(low==high){
        seg[ind]=a[low];
        tem[ind]=1;
        return;
    }
    int mid=(low+high)/2;
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);
    if(tem[2*ind+1]) {
        seg[ind]=seg[2*ind+1]|seg[2*ind+2];
        tem[ind]=0;
    }
    else{
        seg[ind]=seg[2*ind+1]^seg[2*ind+2];
        tem[ind]=1;
    }
}
void update(int ind,int low,int high,int k,int u){
    if(low==high){
        seg[ind]=u;
        return;
    }
    int mid=(low+high)/2;
    if(k<=mid) update(2*ind+1,low,mid,k,u);
    else update(2*ind+2,mid+1,high,k,u);
    if(tem[2*ind+1]) {
        seg[ind]=seg[2*ind+1]|seg[2*ind+2];
        tem[ind]=0;
    }
    else{
        seg[ind]=seg[2*ind+1]^seg[2*ind+2];
        tem[ind]=1;
    }
}
int main(){
    int n,q,l,r;
    scanf("%d %d",&n,&q);
    n=pow(2,n);
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    build(0,0,n-1);
    for(int i=1;i<=q;i++){
        scanf("%d %d",&l,&r);
        update(0,0,n-1,l-1,r);
        printf("%lld\n",seg[0]);
    }
}