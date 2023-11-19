#include <stdio.h>
int main(){
    long long n,count1=0,count2=0,x,sum=0,min;
    scanf("%lld",&n);
    long long a[n];
    for(int i=0;i<n;i++) {
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    x=sum/n;
    for(int i=0;i<n;i++){
        if(a[i]<x) count1+=x-a[i];
        else count2+=a[i]-x-1;
    }
    if(count1>count2) min=count1; 
    else  min=count2;
    count1=count2=0;
    for(int i=0;i<n;i++){
        if(a[i]<x) count1+=x-1-a[i];
        else count2+=a[i]-x;
    }
    if(count1>count2 &&  min>count1) min=count1; 
    else if(min>count2) min=count2;
    printf("%lld\n",min);
}