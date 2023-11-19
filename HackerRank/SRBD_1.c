#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long b,x,y,z=0;
        scanf("%lld %lld",&b,&y);
        x=0;
        while(x<=b){
            if(z%2==0) x=(z*y)+pow(z/2,2)+pow(z/2,2);
            else x=(z*y)+pow(z/2+1,2)+pow(z/2,2);
            z++;
        }
        printf("%lld\n",(long long)pow(2,z-2));
    }
}