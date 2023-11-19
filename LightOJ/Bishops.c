#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int r1,c1,r2,c2;
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        long long int x=r1+c1;
        long long int y=r2+c2;
        if((x%2==0 && y%2!=0) || (x%2!=0 && y%2==0)){
            printf("Case %d: impossible\n",i);
        }
        else if(abs(r1-r2)==abs(c1-c2)){
            printf("Case %d: 1\n",i);
        }
        else{
            printf("Case %d: 2\n",i);
        }
    }
    return 0;
}