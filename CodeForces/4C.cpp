#include<iostream>
#include<string.h>
#include<map>
using namespace std;
int main() {
    int n;
    scanf("%d",&n);
    char s[40];
    map<string,int>a;
    for(int i=0;i<n;i++){
        scanf("%s",s);
        if(a.find(s)!=a.end()) printf("%s%d\n",s,a[s]);
        else printf("OK\n");
        a[s]++;
    }
}