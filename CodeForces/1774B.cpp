#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,k,c=0;
        scanf("%d %d %d",&n,&m,&k);
        int a[m];
        for(int i=0;i<m;i++) scanf("%d",&a[i]);
        sort(a,a+m);
        for(int i=m-1;i>=0;i--) {
            if(a[i]==a[m-1]) c++;
            else break;
        }
        if(n/k>=a[m-1] || (n/k+1==a[m-1] && n%k!=0 && n%k>=c)) printf("YES\n");
        else printf("NO\n");
    }
}