#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int k,sum=0;
    scanf("%d",&k);
    int a[k];
    for(int i=0;i<k;i++) scanf("%d",&a[i]);
    sort(a,a+k);
    for(int i=0;i<=k/2;i++) sum+=(a[i]/2)+1;
    printf("%d\n",sum);
}
