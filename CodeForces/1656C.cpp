#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=0,c1=0,f=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]==1) c++;
            if(a[i]%2==1) c1++;
        }
        sort(a,a+n);
        if(c==0 || c1==n) printf("YES\n");
        else {
            for(int i=1;i<n;i++) if(a[i]-a[i-1]==1) f=1;
            if(f) printf("NO\n");
            else printf("YES\n");
        }
    }
}