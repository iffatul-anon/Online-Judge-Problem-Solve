#include<stdio.h>
int main(){
    int n,b;
    scanf("%d %d",&n,&b);
    int a[n],max=b;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(((b/a[i])*a[j])+(b%a[i])>max) max=((b/a[i])*a[j])+(b%a[i]);
    printf("%d\n",max);
}