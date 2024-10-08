#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,i,x,f=1;
    scanf("%lld",&n);
    char s[n+1];
    int a[n],c=0;
    scanf("%s",s);
    for(i=0;i<n-3;i++){
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='a' && s[i+3]=='b'){
            a[c++]=0;
            i++;
        }
        else if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='a' && s[i+3]=='a'){
            a[c++]=1;
            i+=2;
        }
        else {
            f=0;
            break;
        }
    }
    if(i!=n){
        x=n-i;
        if(x==1) f=0;
        else if(x==2 && s[i]=='a' && s[i+1]=='b'){
            a[c++]=0;
        }
        else if(x==3 && s[i]=='a' && s[i+1]=='b' && s[i+2]=='a'){
            a[c++]=1;
        }
        else f=0;

    }
    if(f==0) printf(":(\n");
    else{
        for(int i=0;i<c;i++) printf("%lld",a[i]);
        printf("\n");
    }
}

