#include<stdio.h>
int main(){
    int n,m;
    while(EOF!=scanf("%d %d",&n,&m)){
        int count=0;
        for(int i=n;i<=m;i++){
            int x=i;
            int flag=0;
            int a[10]={0};
            while(x>0){
                if(a[x%10]==0){
                    a[x%10]=1;
                }
                else{
                    flag=1;
                    break;
                }
                x=x/10;
            }
            if(flag==0){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}