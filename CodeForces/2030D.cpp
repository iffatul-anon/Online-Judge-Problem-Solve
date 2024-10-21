#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define int long long
signed main(){
    int t;
    scanf("%lld", &t);
    while (t--){
        int n,q,maxi,minm,ok=0;
        cin>>n>>q;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++) cin>>a[i];
        maxi=a[0];;
        minm=a[n-1];
        for(int i=0;i<n;i++) {
            if(a[i]>maxi) maxi=a[i];
            b[i]=maxi;
        }
        for(int i=n-1;i>=0;i--) {
            if(a[i]<minm) minm=a[i];
            c[i]=minm;
        }
        string s;
        cin>>s;
        for(int i=0;i<n-1;i++) {
            if(s[i]=='L' && s[i+1]=='R' && b[i]>c[i+1]){
                ok++;
            }
        }
        while(q--){
            int i;
            cin>>i;
            i--;
            if(s[i]=='L' && s[i+1]=='R' && b[i]>c[i+1]){
                s[i]='R';
                ok--;
            }
            else if(s[i]=='R' && s[i+1]=='R' && b[i]>c[i+1]){
                s[i]='L';
                ok++;
            }
            else if(s[i]=='L') s[i]='R';
            else s[i]='L';
            if(s[i-1]=='L' && s[i]=='R' && b[i-1]>c[i]) ok++;
            if(s[i-1]=='L' && s[i]=='L' && b[i-1]>c[i]) ok--;
            if(ok==0) printf("YES\n");
            else printf("NO\n");
        }
    }
}