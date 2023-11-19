#include<stdio.h>
int main(){
    long long n,k,count=0,sum=0;
    scanf("%lld %lld",&n,&k);
    char s[1000000],c[2];
    scanf("%s",s);
    int a[26]={0};
    for(int i=0;i<k;i++){
        scanf("%s",c);
        a[c[0]-'a']=1;
    }
    for(int i=0;i<n;i++){
        if(a[s[i]-'a']==1){
            count++;
        }
        else{
            sum+=(count*(count+1))/2;
            count=0;
        }
    }
    sum+=(count*(count+1))/2;
    printf("%lld\n",sum);
}