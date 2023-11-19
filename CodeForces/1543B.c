#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a;
        scanf("%d",&n);
        long long sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            sum+=a;
        }
        sum=sum%n;
        printf("%lld\n",sum*(n-sum));
    }
}