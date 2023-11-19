#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n],x=0,y=0,l=0,r=n-1;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    char s1[n+1],s2[n+1];
    if(a[l]<a[r]){
        s1[x]='L';
        b[x]=a[l++];
        c[x]=b[x];
        x++;
    }
    else if(a[l]>a[r]){
        s1[x]='R';
        b[x]=a[r--];
        c[x]=b[x];
        x++;
    }
    while(l<=r){
        if((b[x-1]<a[l] && b[x-1]<a[r]) || x==0){
            if(a[l]<a[r]){ 
                s1[x]='L';
                b[x]=a[l++];
                c[x]=b[x];
                x++;
            }
            else if(a[l]>a[r]){ 
                s1[x]='R';
                b[x]=a[r--];
                c[x]=b[x];
                x++;
            }
            else break;
        }
        else if(b[x-1]<a[l]){ 
            s1[x]='L';
            b[x]=a[l++];
            c[x]=b[x];
            x++;
        }
        else if(b[x-1]<a[r]){
            s1[x]='R';
            b[x]=a[r--];
            c[x]=b[x];
            x++;
        }
        else break;
    }
    s1[x]=0;
    y=x;
    strcpy(s2,s1);
    for(int i=l;i<n;i++){
        if(b[x-1]<a[i] || x==0){
            s1[x]='L';
            b[x++]=a[i];
        }
        else break;
    }
    for(int i=r;i>=0;i--){
        if(c[y-1]<a[i] || y==0){
            s2[y]='R';
            c[y++]=a[i];
        }
        else break;
    }
    s1[x]=0;
    s2[y]=0;
    if(x>y) printf("%d\n%s\n",x,s1);
    else printf("%d\n%s\n",y,s2);
}