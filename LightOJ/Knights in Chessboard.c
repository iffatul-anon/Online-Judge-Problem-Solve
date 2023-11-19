#include<stdio.h>
int main(){
    int t,m,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&m,&n);
        int x=m*n;
        if(m==1 || n==1){
            printf("Case %d: %d\n",i,x);
        }
        else if(m==2 || n==2){
            int y=(x/8)*4;
            if(x%8>4){
                y=y+4;
            }
            else{
                y=y+(x%8);
            }
            printf("Case %d: %d\n",i,y);
        }
        else{
            printf("Case %d: %d\n",i,(x+1)/2);
        }
    }
    return 0;
}