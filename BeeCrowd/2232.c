#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+pow(2,i);
        }
        printf("%lld\n",sum);
    }
    return 0;
}