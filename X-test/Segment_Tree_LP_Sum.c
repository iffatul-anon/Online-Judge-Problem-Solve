#include<stdio.h>
long long a[200005],seg[4*200005],lazy[4*200005];
void build(int ind, int low,int high){
    if(low==high){
        seg[ind]=a[low];
        lazy[ind]=0;
        return;
    }
    int mid=(low+high)/2;
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
    lazy[ind]=0;
}
void rangeupdate(int ind,int low,int high,int l,int r,int value){
    if(lazy[ind]!=0){
        seg[ind]+=lazy[ind]*(high-low+1);
        if(low!=high){
            lazy[2*ind+1]+=lazy[ind];
            lazy[2*ind+2]+=lazy[ind];
        }
        lazy[ind]=0;
    }
    if(low>=l && r>=high){
        seg[ind]+=value*(high-low+1);
        if(low!=high){
            lazy[2*ind+1]+=value;
            lazy[2*ind+2]+=value;
        }
        return;
    }
    if(low>r || l>high) return;
    int mid=(low+high)/2;
    rangeupdate(2*ind+1,low,mid,l,r,value);
    rangeupdate(2*ind+2,mid+1,high,l,r,value);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}
long long query(int ind, int low, int high, int l, int r){
    if(lazy[ind]!=0){
        seg[ind]+=lazy[ind]*(high-low+1);
        if(low!=high){
            lazy[2*ind+1]+=lazy[ind];
            lazy[2*ind+2]+=lazy[ind];
        }
        lazy[ind]=0;
    }
    if(low>=l && r>=high) return seg[ind];
    if(low>r || l>high) return 0;
    int mid=(low+high)/2;
    return query(2*ind+1,low,mid,l,r)+query(2*ind+2,mid+1,high,l,r);
}
int main(){
    int n,q,x,l,r,y;
    scanf("%d %d",&n,&q);
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    build(0,0,n-1);
    for(int i=1;i<=q;i++){
        scanf("%d",&x);
        if(x==1) {
            scanf("%d %d %d",&l,&r,&y);
            rangeupdate(0,0,n-1,l-1,r-1,y);
        }
        else {
            scanf("%d %d",&l,&r);
            printf("%lld\n",query(0,0,n-1,l-1,r-1));
        }
    }
}