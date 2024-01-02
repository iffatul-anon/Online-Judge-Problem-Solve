#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,i,j,f=0;
        scanf("%d %d",&n,&k);
        int a[n];
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,a+n);
        i=0;
        j=1;
        while(i<n && j<n){
            if(a[j]-a[i]==k){
                f=1;
                break;
            }
            else if(a[j]-a[i]>k) i++;
            else j++;
        }
        if(n==1 && a[0]==k) f=1;
        if(f) printf("YES\n");
        else printf("NO\n");
    }
}