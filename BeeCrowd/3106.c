#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n--){
        int a;
        scanf("%d",&a);
        sum=sum+(a/3);
    }
    printf("%d\n",sum*3);
    return 0;
}