#include <stdio.h>
#include<stdlib.h>
int main(){
    int n,a,min;
    scanf("%d",&n);
    scanf("%d",&a);
    min=abs(a);
    for(int i=1;i<n;i++){
        scanf("%d",&a);
        if(abs(a)<min) min=abs(a);
    }
    printf("%d\n",min);
}