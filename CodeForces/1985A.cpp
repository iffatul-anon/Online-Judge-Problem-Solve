#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        char s1[10],s2[10];
        scanf("%s %s",s1,s2);
        printf("%c",s2[0]);
        for(int i=1;s1[i];i++) printf("%c",s1[i]);
        printf(" %c",s1[0]);
        for(int i=1;s2[i];i++) printf("%c",s2[i]);
        printf("\n");
    }
}