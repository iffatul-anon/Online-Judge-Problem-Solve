#include<stdio.h>
int main(){
    int n,max=0,x,y;
    scanf("%d",&n);
    scanf("%d",&x);
    for(int i=1;i<n;i++){
        scanf("%d",&y);
        if(max<y) max=y;
    }
    if(max==x) printf("1\n");
    else if(max>x)printf("%d\n",max-x+1);
    else printf("0\n");
}