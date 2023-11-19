#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,count=0,count2=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
        if(a[i]==b[i]) count++;
    }
    sort(a,a+n);
    sort(b,b+n);
    int i=0,j=0;
    while(i<n && j<n){
        if(a[i]==b[j]){
            count2++;
            i++;
            j++;
        }
        else if(a[i]>b[j]) j++;
        else if(a[i]<b[j]) i++;
    }
    printf("%d\n%d\n",count,count2-count);
}