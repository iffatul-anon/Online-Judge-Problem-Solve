#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
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
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m,x,f=0,anon=1;
        scanf("%lld",&n);
        vector<pair<long long,long long> >v(n);
        for(int i=0;i<n;i++) scanf("%lld",&v[i].second);
        for(int i=0;i<n;i++) scanf("%lld",&v[i].first);
        sort(v.begin(),v.end());
        map<long long,long long>mp;
        scanf("%lld",&m);
        for(int i=0;i<m;i++){
            scanf("%lld",&x);
            mp[x]++;
        }
        x=v[0].first;
        for(int i=0;i<n;i++) printf("%lld %lld\n",v[i].first,v[i].second);
        for(int i=0;i<n;i++){
            if(v[i].first==x){
                if(v[i].second>v[i].first) f=1;
                if(v[i].second<v[i].first){
                    anon=0;
                    break;
                }
            }
            else{
                printf("mp%lld %lld\n",x,mp[x]);
                if(f){
                    if(mp[x]){
                        mp[x]--;
                        if(mp[x]==0) mp.erase(x);
                    }
                    else{
                        anon=0;
                        break;
                    }
                }
                x=v[i].first;
                i--;
                f=0;
            }
        }
        if(f && mp[x]==0) anon=0;
        if(anon) printf("YES\n");
        else printf("NO\n");
    }
}