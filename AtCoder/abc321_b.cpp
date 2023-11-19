#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int a[n],sum=0,sum2=0,anon=0;
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sort(a,a+n-1);
    sum2=sum-a[n-2];
    if(sum2>=x) printf("0\n");
    else{
        sum2=sum-a[0]-a[n-2];
        for(int i=a[0]+1;i<=a[n-2];i++){
            if(sum2+i>=x){
                anon=i;
                break;
            }
        }
        if(anon==0) printf("-1\n");
        else printf("%d\n",anon);
    }
}