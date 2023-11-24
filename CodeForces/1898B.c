#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,c=0,x,y,i;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++) scanf("%lld",&a[i]);
        for(i=n-2;i>=0;i--){
            if(a[i]>a[i+1]){
                x=a[i]%a[i+1];
                if(x==0){
                    c+=(a[i]/a[i+1])-1;
                    a[i]=a[i+1];
                }
                else{
                    c+=(a[i]/a[i+1]);
                    y=(a[i]/a[i+1])+1;
                    a[i]=a[i]/y;
                }
            }
        }
        printf("%lld\n",c);
    }
}