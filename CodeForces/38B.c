#include <stdio.h> 
#include<string.h>
int main(){
    char r[3],k[3];
    scanf("%s %s",r,k);
    int a[8][8],c=0,f=0;
    for(int i=0;i<8;i++) for(int j=0;j<8;j++) a[i][j]=0;
    a[r[0]-'a'][r[1]-'1']=1;
    a[k[0]-'a'][k[1]-'1']=1;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(a[i][j]==1 || r[0]-'a'==i || r[1]-'1'==j) continue;
            f=0;
            if(i+2<8 && j+1<8 && a[i+2][j+1]==1) f=1;
            if(i+2<8 && j-1>=0 && a[i+2][j-1]==1) f=1;
            if(i+1<8 && j+2<8 && a[i+1][j+2]==1) f=1;
            if(i+1<8 && j-2>=0 && a[i+1][j-2]==1) f=1;
            if(i-2>=0 && j+1<8 && a[i-2][j+1]==1) f=1;
            if(i-2>=0 && j-1>=0 && a[i-2][j-1]==1) f=1;
            if(i-1>=0 && j+2<8 && a[i-1][j+2]==1) f=1;
            if(i-1>=0 && j-2>=0 && a[i-1][j-2]==1) f=1;
            if(f==0) c++;
        }
    }
    printf("%d\n",c);
}