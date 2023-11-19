#include<stdio.h>
int main(){
    int n,tem,count;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                for(int k=j;k<n-1;k++){
                    a[k]=a[k+1];
                }
                j--;
                n--;
            }
        }
        printf("%d aparece %d vez(es)\n",a[i],count);
    }
    return 0;
}