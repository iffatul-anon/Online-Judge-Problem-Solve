#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,d=1,flag=0,max=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i!=0 && abs(a[i]-a[i-1])!=1 ){
            if(a[i]==a[i-1] || (d>1 && abs(a[i]-a[i-1])!=d)) flag=1;
            else d=abs(a[i]-a[i-1]);
        }
    }
    if(d==1) d=1000000000;
    for(int i=1;i<n;i++){
        if((a[i-1]+1==a[i] && a[i-1]%d==0) || (a[i]+1==a[i-1] && a[i]%d==0)) flag=1;
    }
    if(flag==1) printf("NO\n");
    else printf("YES\n1000000000 %d\n",d);
}
