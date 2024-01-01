#include<stdio.h>
int main(){
    int n,a=0,b=0,c=0;
    scanf("%d",&n);
    int t[n],aa[n],bb[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&t[i]);
        if(t[i]<0) aa[a++]=t[i];
        if(t[i]>0) bb[b++]=t[i];
        if(t[i]==0) c++;
    }
    printf("1 %d\n",aa[0]);
    if(b==0) printf("2 %d %d\n",aa[1],aa[2]);
    else {
        printf("%d ",b);
        for(int i=0;i<b;i++) printf("%d ",bb[i]);
        printf("\n");
    }
    if(b==0){
        printf("%d ",c+a-3);
        for(int i=0;i<c;i++) printf("0 ");
        for(int i=3;i<a;i++) printf("%d ",aa[i]);
        printf("\n");
    }
    else{
        printf("%d ",c+a-1);
        for(int i=0;i<c;i++) printf("0 ");
        for(int i=1;i<a;i++) printf("%d ",aa[i]);
        printf("\n");
    }
}