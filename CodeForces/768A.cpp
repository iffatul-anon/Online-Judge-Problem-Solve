#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=1;i<n-1;i++) if(a[i]>a[0] && a[i]<a[n-1]) c++;
    printf("%d\n",c);
}