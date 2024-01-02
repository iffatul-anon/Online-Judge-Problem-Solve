#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,f=0;
        scanf("%d",&n);
        int a[n],b[100]={0};
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,a+n);
        for(int i=n-1;i>=0;i--){
            while((a[i]>n || b[a[i]]==1) && a[i]>0) a[i]/=2;
            if(a[i]==0) f=1;
            b[a[i]]=1;
        }
        if(f) printf("NO\n");
        else printf("YES\n");
    }
}