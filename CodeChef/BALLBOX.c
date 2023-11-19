#include<stdio.h>
int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        float s;
        s=k/2.0;
        s=s*(2+(k-1));
        
        if(n>=s){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}