#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,x;
    scanf("%lld",&n);
    char s[n+1];
    int a[26]={1,1,1,1,1,2,2,2,2,2,1,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5},b[26]={1,2,3,4,5,1,2,3,4,5,3,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5};
    scanf("%s",s);
    for(int i=0;i<n;i++){
        x=s[i]-'A';
        x=a[x];
        for(int j=0;j<x;j++) printf("*");
        printf(" ");
        x=s[i]-'A';
        x=b[x];
        for(int j=0;j<x;j++) printf("*");
        printf(" ");
    }
    printf("\n");
}
