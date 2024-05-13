#include<stdio.h>
long long a[200005],seg[4*200005],add[4*200005],set[4*200005];
void build(int ind, int low,int high){
    add[ind]=add[ind]=0;
    if(low==high){
        seg[ind]=a[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}
void rangeupdate(int ind,int low,int high,int l,int r,int value){
    if(set[ind]!=0){
        seg[ind]=set[ind]*(high-low+1);
        if(low!=high){
            set[2*ind+1]=set[ind];
            set[2*ind+2]=set[ind];
            add[2*ind+1]=0;
            add[2*ind+2]=0;
        }
        set[ind]=0;
        add[ind]=0;
    }
    else if(add[ind]!=0){
        seg[ind]+=add[ind]*(high-low+1);
        if(low!=high){
            add[2*ind+1]+=add[ind];
            add[2*ind+2]+=add[ind];
        }
        add[ind]=0;
    }
    if(low>=l && r>=high){
        seg[ind]+=value*(high-low+1);
        if(low!=high){
            add[2*ind+1]+=value;
            add[2*ind+2]+=value;
        }
        return;
    }
    if(low>r || l>high) return;
    int mid=(low+high)/2;
    rangeupdate(2*ind+1,low,mid,l,r,value);
    rangeupdate(2*ind+2,mid+1,high,l,r,value);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}
void rangeupdate2(int ind,int low,int high,int l,int r,int value){
    if(set[ind]!=0){
        seg[ind]=set[ind]*(high-low+1);
        if(low!=high){
            set[2*ind+1]=set[ind];
            set[2*ind+2]=set[ind];
            add[2*ind+1]=0;
            add[2*ind+2]=0;
        }
        set[ind]=0;
        add[ind]=0;
    }
    else if(add[ind]!=0){
        seg[ind]+=add[ind]*(high-low+1);
        if(low!=high){
            add[2*ind+1]+=add[ind];
            add[2*ind+2]+=add[ind];
        }
        add[ind]=0;
    }
    if(low>=l && r>=high){
        seg[ind]=value*(high-low+1);
        if(low!=high){
            set[2*ind+1]=value;
            set[2*ind+2]=value;
        }
        return;
    }
    if(low>r || l>high) return;
    int mid=(low+high)/2;
    rangeupdate2(2*ind+1,low,mid,l,r,value);
    rangeupdate2(2*ind+2,mid+1,high,l,r,value);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}
long long query(int ind, int low, int high, int l, int r){
    if(set[ind]!=0){
        seg[ind]=set[ind]*(high-low+1);
        if(low!=high){
            set[2*ind+1]=set[ind];
            set[2*ind+2]=set[ind];
            add[2*ind+1]=0;
            add[2*ind+2]=0;
        }
        set[ind]=0;
        add[ind]=0;
    }
    else if(add[ind]!=0){
        seg[ind]+=add[ind]*(high-low+1);
        if(low!=high){
            add[2*ind+1]+=add[ind];
            add[2*ind+2]+=add[ind];
        }
        add[ind]=0;
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
        else if(x==2){
            scanf("%d %d %d",&l,&r,&y);
            rangeupdate2(0,0,n-1,l-1,r-1,y);
        }
        else {
            scanf("%d %d",&l,&r);
            printf("%lld\n",query(0,0,n-1,l-1,r-1));
        }
    }
}