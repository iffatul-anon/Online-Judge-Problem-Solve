#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        scanf("%d",&a);
        if(360%(180-a)) printf("NO\n");
        else printf("YES\n");
    }
}