#include<stdio.h>
int main(){
    int n,count=0,count2=0,x;
    scanf("%d",&n);
    int a[1001]={0};
    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        a[x]++;
    }
    for(int i=1;i<=1000;i++) if(a[i]>0) count++;
    while(count>1){
        count2+=count-1;
        count=0;
        for(int i=1;i<=1000;i++){
            if(a[i]>0) a[i]--;
            if(a[i]>0) count++;
        }
    }
    printf("%d\n",count2);
}