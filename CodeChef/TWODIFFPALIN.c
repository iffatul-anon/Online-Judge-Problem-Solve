#include<stdio.h>
int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        if((a%2!=0 && b%2!=0) || a==1 || b==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}