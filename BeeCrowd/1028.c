#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n1,n2;
        int anon;
        scanf("%d %d",&n1,&n2);
        while(n1!=n2){
            if(n1 > n2)
                n1 -= n2;
            else
                n2 -= n1;
            }
        printf("%d\n",n1);
    }
    return 0;
}