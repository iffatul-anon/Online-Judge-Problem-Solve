#include<bits/stdc++.h>
using namespace std;
int main(){
    int nn,z=0,e=0,r=0,o=0,n=0;
    scanf("%d",&nn);
    char s[nn+1];
    scanf("%s",s);
    for(int i=0;i<nn;i++){
        if(s[i]=='z') z++;
        else if(s[i]=='e') e++;
        else if(s[i]=='r') r++;
        else if(s[i]=='o') o++;
        else if(s[i]=='n') n++;
    }
    for(int i=0;i<n;i++) printf("1 ");
    for(int i=0;i<z;i++) printf("0 ");
    printf("\n");
}
