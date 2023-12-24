#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++) scanf("%d",&b[i]);
    for(int i=0;i<n-2;i++) scanf("%d",&c[i]);
    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);
    b[n-1]=-1;
    c[n-2]=-1;
    for(int i=0;i<n;i++) {
        if(a[i]!=b[i]){
            printf("%d\n",a[i]);
            break;
        }
    }
    for(int i=0;i<n-1;i++) {
        if(b[i]!=c[i]){
            printf("%d\n",b[i]);
            break;
        }
    }
}