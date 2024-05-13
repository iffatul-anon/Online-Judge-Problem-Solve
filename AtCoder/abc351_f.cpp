#include<iostream>
#include<algorithm>
#include<map>
#include <unordered_map>
#include<set>
using namespace std;
unordered_map <long long,long long>seg,seg2,id;
void update(int ind,int low,int high,int k,int val){
    if(low==high){
        seg[ind]+=val;
        return;
    }
    int mid=(low+high)/2;
    if(k<=mid) update(2*ind+1,low,mid,k,val);
    else update(2*ind+2,mid+1,high,k,val);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}
long long query(int ind, int low, int high, int l, int r){
    if(low>=l && r>=high) return seg[ind];
    if(low>r || l>high) return 0;
    int mid=(low+high)/2;
    return query(2*ind+1,low,mid,l,r)+query(2*ind+2,mid+1,high,l,r);
}
void update2(int ind,int low,int high,int k){
    if(low==high){
        seg2[ind]++;
        return;
    }
    int mid=(low+high)/2;
    if(k<=mid) update2(2*ind+1,low,mid,k);
    else update2(2*ind+2,mid+1,high,k);
    seg2[ind]=seg2[2*ind+1]+seg2[2*ind+2];
}
long long query2(int ind, int low, int high, int l, int r){
    if(low>=l && r>=high) return seg2[ind];
    if(low>r || l>high) return 0;
    int mid=(low+high)/2;
    return query2(2*ind+1,low,mid,l,r)+query2(2*ind+2,mid+1,high,l,r);
}
int main(){
    long long n,y=1,sum=0;
    scanf("%lld",&n);
    long long aa[n];
    set<long long>s;
    for(int i=0;i<n;i++){
        scanf("%lld",&aa[i]);
        s.insert(aa[i]);
    }
    for(auto vl:s){
        id[vl]=y++;
    }
    for(int i=0;i<n;i++) {
        sum+=(aa[i]*query2(0,0,y,0,id[aa[i]]))-query(0,0,y,0,id[aa[i]]);
        update(0,0,y,id[aa[i]],aa[i]);
        update2(0,0,y,id[aa[i]]);
    }
    printf("%lld\n",sum);
}