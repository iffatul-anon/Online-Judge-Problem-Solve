#include<stdio.h>
#include<math.h>
int main(){
    int n;
    while(EOF!=scanf("%d",&n)){
        int a=sqrt(n);
        int b=0;
        int flag=0;
        while(a>=b){
            int c=pow(a,2)+pow(b,2);
        if(c==n){
            flag=1;
            break;
        }
        else if(c<n){
            b++;
        }
        else{
            a--;
        }
        }
        if(flag==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}