#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,flag=0;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i]%2!=b[i]%2) {
                flag=1;
                break;
            }
        }
        if(flag==1) printf("NO\n");
        else printf("YES\n");
    }
}