#include <stdio.h>
int main() {
    int n,x,count1=0,count2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x>=10 && x<=20){
            count1++;
        }
        else{
            count2++;
        }
    }
    printf("%d in\n",count1);
    printf("%d out\n",count2);
    return 0;
}