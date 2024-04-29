#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,i,x,c1=0,c2=0,a[20]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288};
        scanf("%d %d",&n,&k);
        c1=log2(n);
        c2=log2(k);
        printf("25\n");
        for(i=0;i<=c1;i++) if(i!=c2) printf("%d ",a[i]);
        if(a[c2]==k) {
            x=c2+1;
            printf("%d ",k+1);
            for(i=0;i<25-c1-1 && x<20;i++) printf("%d ",a[x++]+a[c2]);
            for(i=i;i<25-c1-1;i++) printf("%d ",k+1);
        }
        else {
            x=c2;
            printf("%d %d ",k-a[c2],k+1);
            for(i=0;i<25-c1-2 && x<20;i++) printf("%d ",a[x++]+a[c2]);
            for(i=i;i<25-c1-2;i++) printf("%d ",k+1);
        }
        printf("\n");
    }
}