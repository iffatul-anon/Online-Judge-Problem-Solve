#include<stdio.h>
int main(){
    int n,flag=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++) scanf("%d %d",&a[i],&b[i]);
    for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) for(int k=j+1;k<n;k++) if((a[j]-a[i])*(b[k]-b[j])==(a[k]-a[j])*(b[j]-b[i])) flag=1;
    if(flag==1) printf("Yes\n");
    else printf("No\n");
}