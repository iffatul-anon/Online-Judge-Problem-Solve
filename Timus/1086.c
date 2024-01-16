#include<stdio.h>
int main(){
    int a[170000]={0},a2[15000],pos=0;
    for(int i=2;i<170000;i++){
        if(a[i]==0){
            a2[pos++]=i;
            for(int j=i+i;j<170000;j=j+i){
                a[j]=1;
            }
        }
    }
    int k,n;
    scanf("%d",&k);
    while(k--){
        scanf("%d",&n);
        printf("%d\n",a2[n-1]);
    }
    return 0;
}