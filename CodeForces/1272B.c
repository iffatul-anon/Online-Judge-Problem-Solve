#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000000];
        scanf("%s",s);
        int n=strlen(s),l=0,r=0,u=0,d=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L') l++;
            if(s[i]=='R') r++;
            if(s[i]=='U') u++;
            if(s[i]=='D') d++;
        }
        if((l==0 || r==0) && (u>0 && d>0)) printf("2\nUD\n");
        else if((u==0 || d==0) && (l>0 && r>0)) printf("2\nLR\n");
        else if(l==0 || r==0 || u==0 || d==0) printf("0\n\n");
        else{
            int x=l,y=u;
            if(l>r) x=r;
            if(u>d) y=d;
            printf("%d\n",x+x+y+y);
            for(int i=0;i<x;i++) printf("L");
            for(int i=0;i<y;i++) printf("U");
            for(int i=0;i<x;i++) printf("R");
            for(int i=0;i<y;i++) printf("D");
            printf("\n");
        }
    }
}