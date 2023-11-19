#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,x;
        scanf("%d %d %d",&n,&k,&x);
        if(x!=1){
            printf("YES\n%d\n",n);
            for(int i=0;i<n;i++) printf("1 ");
            printf("\n");
        }
        else if(x==1 && n%2==0 && k>1){
            printf("YES\n%d\n",n/2);
            for(int i=0;i<n/2;i++) printf("2 ");
            printf("\n");
        }
        else if(x==1 && n%2==1 && k>2){
            printf("YES\n%d\n",n/2);
            for(int i=0;i<n/2-1;i++) printf("2 ");
            printf("3\n");
        }
        else{
            printf("NO\n");
        }
    }
}