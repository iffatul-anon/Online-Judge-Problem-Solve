#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n;
    scanf("%lld",&n);
    int a[n],mex=1,b[10000]={0};
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        b[a[i]]=1;
        while(b[mex]) mex++;
    }
    if(mex==1){
        for(int i=0;i<n;i++) printf("%lld ",a[i]);
        printf("\n");
    }
    else if(mex==2){
        printf("1 ");
        for(int i=0;i<n;i++){
            if(a[i]==1) continue;
            printf("%lld ",a[i]);
        }
        printf("\n");
    }
    else {
        printf("1 ");
        for(int i=0;i<n;i++){
            if(a[i]==1 || a[i]==2) continue;
            printf("%lld ",a[i]);
        }
        printf("2\n");
    }



}

