#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y;
        scanf("%d",&n);
        vector<pair<int ,int> > anon;
        for(int i=0;i<n;i++){
            scanf("%d %d",&x,&y);
            anon.push_back(make_pair(x,y));
        }
        sort(anon.begin(),anon.end());
        int a[n];
        x=1,y=0;
        long long int sum=0;
        anon.push_back(make_pair(0,0));
        for(int i=0;i<=n;i++){
            if(anon[i].first==x){
                a[y++]=anon[i].second;
            }
            else{
                sort(a,a+y);
                for(int k=y-1;k>=0;k--){
                    sum=sum+a[k];
                    if(y-k==x) break;
                }
                x++;
                y=0;
                if(i!=n) i--;
            }
        }
        printf("%lld\n",sum);
    }
}