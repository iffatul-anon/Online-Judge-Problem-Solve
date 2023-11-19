#include<stdio.h>
#include<math.h>
int main(){
    unsigned long n,i,j,k,m,l;
    scanf("%lu",&n);
    if(n<5) {
        printf("Yes\n");
        return 0;
    }
    for(i=0;i<100;i++){
        m=pow(2,i);
        if(m>n) break;
        if(n%m!=0) continue;
        j=n/m;
        for(k=0;k<100;k++){
            l=pow(3,k);
            if(l>j) break;
            if(l==j){
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}