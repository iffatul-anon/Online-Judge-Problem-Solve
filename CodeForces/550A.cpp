#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[1000000],s2[1000000];
    scanf("%s",s);
    int l=strlen(s),f1=0,f2=0;
    for(int i=0;i<l;i++) s2[i]=s[i];
    s2[l]=0;
    for(int i=0;i<l-1;i++){
        if(s[i]=='A' && s[i+1]=='B'){
            s[i]='.';
            s[i+1]='.';
            f1++;
            break;
        }
    }
    for(int i=0;i<l-1;i++){
        if(s[i]=='B' && s[i+1]=='A'){
            s[i]='.';
            s[i+1]='.';
            f1++;
            break;
        }
    }
    for(int i=0;i<l-1;i++){
        if(s2[i]=='B' && s2[i+1]=='A'){
            s2[i]='.';
            s2[i+1]='.';
            f2++;
            break;
        }
    }
    for(int i=0;i<l-1;i++){
        if(s2[i]=='A' && s2[i+1]=='B'){
            s2[i]='.';
            s2[i+1]='.';
            f2++;
            break;
        }
    }
    if(f1==2 || f2==2) printf("YES\n");
    else printf("NO\n");
}
