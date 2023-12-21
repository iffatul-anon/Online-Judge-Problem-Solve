#include<stdio.h>
#include<string.h>
int main(){
    int n,m,x,y,z=0;
    scanf("%d %d",&n,&m);
    char s[n][m+1],s1[10000];
    for(int i=0;i<n;i++) {
        scanf("%s",s[i]);
        for(int j=0;j<m;j++) {
            if(s[i][j]=='S'){
                x=i;
                y=j;
            }
        }
    }
    int i=x,j=y;
    s[i][j]='.';
    if(i<n-1 && s[i+1][j]!='.') {
        s1[z++]='D';
        i++;
    }
    else if(i>0 && s[i-1][j]!='.') {
        s1[z++]='U';
        i--;
    }
    else if(j<m-1 && s[i][j+1]!='.') {
        s1[z++]='R';
        j++;
    }
    else if(j>0 && s[i][j-1]!='.') {
        s1[z++]='L';
        j--;
    }
    while(1){
        s[i][j]='.';
        if(i<n-1 && s[i+1][j]!='.') {
            s1[z++]='D';
            i++;
        }
        else if(i>0 && s[i-1][j]!='.') {
            s1[z++]='U';
            i--;
        }
        else if(j<m-1 && s[i][j+1]!='.') {
            s1[z++]='R';
            j++;
        }
        else if(j>0 && s[i][j-1]!='.') {
            s1[z++]='L';
            j--;
        }
        s[x][y]='S';
        if(i==x && j==y) break;
    }
    s1[z]=0;
    printf("%s\n",s1);
}