#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,count=0,flag=1,flag2=1;
        scanf("%d",&n);
        char s[n+1],c[2];
        scanf("%s",s);
        int a[n];
        if(s[0]=='(') c[0]='(';
        if(s[0]==')') c[0]=')';
        for(int i=0;i<n;i++){
            if(s[i]==c[0]) {
                count++;
                a[i]=flag;
            }
            else{
                count--;
                if(count>=0) a[i]=flag;
                else{
                    count=1;
                    if(flag==1) flag=2;
                    else flag=1;
                    a[i]=flag;
                    if(c[0]=='(') c[0]=')';
                    else c[0]='(';
                }
            }
            if(a[i]==2) flag2=2;
        }
        if(count!=0) printf("-1\n");
        else{
            printf("%d\n",flag2);
            for(int i=0;i<n;i++) printf("%d ",a[i]);
            printf("\n");
        }
    }
}