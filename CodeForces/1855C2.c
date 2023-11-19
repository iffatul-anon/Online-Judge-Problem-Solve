#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,max=-100,min=100,aa,bb,cc,neg=0,pos=0;
        scanf("%d",&n);
        int a[n],b[100],c[100],z=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(max<a[i]) {
                max=a[i];
                bb=i;
            }
            if(min>a[i]) {
                min=a[i];
                cc=i;
            }
            if(a[i]<0) neg++;
            else pos++;
        }
        if(max==0 && max!=min){
            for(int i=n-1;i>0;i--){
                if(a[i-1]>a[i]){
                    b[z]=i;
                    c[z++]=i+1;
                    a[i-1]+=a[i];
                }
            }
        }
        else if(neg>pos && -min<max && neg<13){
            for(int i=0;i<n;i++){
                if(a[i]<0){
                    b[z]=i+1;
                    c[z++]=bb+1;
                    a[i]+=a[bb];
                }
            }
            for(int i=1;i<n;i++){
                if(a[i-1]>a[i]){
                    b[z]=i+1;
                    c[z++]=i;
                    a[i]+=a[i-1];
                }
            }
        }
        else if(neg>pos){
            while(-min<max){
                b[z]=cc+1;
                c[z++]=cc+1;
                a[cc]+=a[cc];
                min=a[cc];
            }
            for(int i=0;i<n;i++){
                if(a[i]>=0){
                    b[z]=i+1;
                    c[z++]=cc+1;
                    a[i]+=a[cc];
                }
            }
            for(int i=n-1;i>0;i--){
                if(a[i-1]>a[i]){
                    b[z]=i;
                    c[z++]=i+1;
                    a[i-1]+=a[i];
                }
            }
        }
        else if(-min>max && pos<13){
            for(int i=0;i<n;i++){
                if(a[i]>=0){
                    b[z]=i+1;
                    c[z++]=cc+1;
                    a[i]+=a[cc];
                }
            }
            for(int i=n-1;i>0;i--){
                if(a[i-1]>a[i]){
                    b[z]=i;
                    c[z++]=i+1;
                    a[i-1]+=a[i];
                }
            }
        }
        else{
            while(-min>max){
                b[z]=bb+1;
                c[z++]=bb+1;
                a[bb]+=a[bb];
                max=a[bb];
            }
            for(int i=0;i<n;i++){
                if(a[i]<0){
                    b[z]=i+1;
                    c[z++]=bb+1;
                    a[i]+=a[bb];
                }
            }
            for(int i=1;i<n;i++){
                if(a[i-1]>a[i]){
                    b[z]=i+1;
                    c[z++]=i;
                    a[i]+=a[i-1];
                }
            }
        }
        printf("%d\n",z);
        for(int i=0;i<z;i++) printf("%d %d\n",b[i],c[i]);
    }
}