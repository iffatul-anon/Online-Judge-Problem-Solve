#include <stdio.h>
int main() {
    int d,sumt,sum1=0,sum2=0,dd;
    scanf("%d %d",&d,&sumt);
    int a[d],b[d];
    for(int i=0;i<d;i++){
        scanf("%d %d",&a[i],&b[i]);
        sum1+=a[i];
        sum2+=b[i];
    }
    if(sum1>sumt || sum2<sumt) printf("NO\n");
    else{
        printf("YES\n");
        dd=sumt-sum1;
        for(int i=0;i<d;i++){
            if(dd==0) printf("%d ",a[i]);
            else if(b[i]-a[i]<=dd){
                printf("%d ",b[i]);
                dd-=b[i]-a[i];
            }
            else {
                printf("%d ",a[i]+dd);
                dd=0;
            }
        }
    }
}
