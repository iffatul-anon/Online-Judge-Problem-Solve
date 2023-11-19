#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long a[n],sum=1,sum2=1,max=0,c=0;
        for(int i=0;i<n;i++) {
            scanf("%lld",&a[i]);
            if(a[i]!=0) sum=sum*a[i];
            if(a[i]==0) c++;
        }
        if(c>1) printf("0\n");
        else if(c==1) printf("%lld\n",sum);
        else{
            for(int i=0;i<n;i++){
                sum2=sum/a[i];
                sum2=sum2*(a[i]+1);
                if(sum2>max) max=sum2;
            }
            printf("%lld\n",max);
        }
    }
}