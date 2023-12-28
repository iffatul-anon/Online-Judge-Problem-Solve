#include<stdio.h>
int main(){
    int n,max=0,f,x;
    scanf("%d",&n);
    int a[10001]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        a[x]++;
        if(x>max) max=x;
    }
    for(int i=1;i*i<=max;i++){
        if(max%i==0){
            a[i]--;
            a[max/i]--;
            if(max/i==i) a[i]++;
        }
    }
    for(int i=max;i>=0;i--) {
        if(a[i]>0){
            f=i;
            break;
        }
    }
    printf("%d %d\n",max,f);
}