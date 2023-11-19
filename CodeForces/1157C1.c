#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n],x=0,l=0,r=n-1;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    char s[n+1];
    if(a[0]<a[n-1]){
        s[x]='L';
        b[x++]=a[l++];
    }
    else{
        s[x]='R';
        b[x++]=a[r--];
    }
    while(l<=r){
        if(b[x-1]<a[l] && b[x-1]<a[r]){
            if(a[l]<a[r]){ 
                s[x]='L';
                b[x++]=a[l++];
            }
            else{ 
                s[x]='R';
                b[x++]=a[r--];
            }
        }
        else if(b[x-1]<a[l]){ 
            s[x]='L';
            b[x++]=a[l++];
        }
        else if(b[x-1]<a[r]){
            s[x]='R';
            b[x++]=a[r--];
        }
        else break;
    }
    s[x]=0;
    printf("%d\n%s\n",x,s);
}