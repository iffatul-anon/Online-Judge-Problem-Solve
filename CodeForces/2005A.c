#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,x,y;
        scanf("%lld",&n);
        x=n/5;
        y=n%5;
        for(int i=0;i<x;i++) printf("a");
        if(y>0) printf("a");
        for(int i=0;i<x;i++) printf("e");
        if(y>1) printf("e");
        for(int i=0;i<x;i++) printf("i");
        if(y>2) printf("i");
        for(int i=0;i<x;i++) printf("o");
        if(y>3) printf("o");
        for(int i=0;i<x;i++) printf("u");
        printf("\n");
    }
}