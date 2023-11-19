#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a;
    long long int anon[200001]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        anon[a]++;
    }
    long long int count=0;
    for(int i=1;i<200001;i++){
        for(int j=1;j*i<200001;j++){
            count=count+(anon[i]*anon[j]*anon[i*j]);
        }
    }
    printf("%lld\n",count);
    return 0;
}