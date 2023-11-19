#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,max=-100,min=100,aa,bb,cc;
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
        }
        if(max==min) printf("0\n");
        else if(max>-min){
            for(int i=n-1;i>=0;i--) if(a[i]>=0) aa=i;
            for(int i=aa-1;i>=0;i--){
                if(i!=0 && a[i-1]>a[i]){
                    b[z]=i;
                    c[z++]=i+1;
                    a[i-1]+=a[i];
                }
            }
            if(a[aa]<a[bb]){
                b[z]=aa+1;
                c[z++]=bb+1;
                a[aa]+=a[bb];
            }
            for(int i=aa;i<n;i++){
                if(i!=0 && a[i-1]>a[i]){
                    b[z]=i+1;
                    c[z++]=i;
                    a[i]+=a[i-1];
                    i--;
                }
            }
            printf("%d\n",z);
            for(int i=0;i<z;i++) printf("%d %d\n",b[i],c[i]);
        }
        else{
            for(int i=0;i<n;i++) if(a[i]<0) aa=i;
            for(int i=aa+1;i<n;i++){
                if(i!=0 && a[i-1]>a[i]){
                    b[z]=i+1;
                    c[z++]=i;
                    a[i]+=a[i-1];
                }
            }
            if(a[aa]>a[cc]){
                b[z]=aa+1;
                c[z++]=cc+1;
                a[aa]+=a[cc];
            }
            for(int i=aa;i>0;i--){
                if(i!=0 && a[i-1]>a[i]){
                    b[z]=i;
                    c[z++]=i+1;
                    a[i-1]+=a[i];
                    i++;
                }
            }
            printf("%d\n",z);
            for(int i=0;i<z;i++) printf("%d %d\n",b[i],c[i]);
        }
    }
}