#include<stdio.h>
int main(){
    int max=0,pos;
    for(int i=1;i<=100;i++){
        int n;
        scanf("%d",&n);
        if(max<n){
            max=n;
            pos=i;
        }
    }
    printf("%d\n%d\n",max,pos);
    return 0;
}