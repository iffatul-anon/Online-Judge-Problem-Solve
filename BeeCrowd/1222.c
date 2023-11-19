#include<stdio.h>
#include<string.h>
int main(){
    int n,l,c;
    while(EOF!=scanf("%d",&n)){
        scanf("%d %d",&l,&c);
        fflush(stdin);
        char s[10000];
        gets(s);
        int count=0;
        int a[n],x=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]==' ' || i==strlen(s)-1){
                if(i==strlen(s)-1){
                    count++;
                }
                a[x++]=count;
                count=0;
            }
            else{
                count++;
            }
        }
        int sum=0;
        count=1;
        for(int i=0;i<n;i++){
            if(sum+a[i]<=c){
                sum=sum+a[i]+1;
            }
            else{
                i--;
                sum=0;
                count++;
            }
        }
        if(count%l==0){
            printf("%d\n",count/l);
        }
        else{
            printf("%d\n",count/l+1);
        }
    }
    return 0;
}