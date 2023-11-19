#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,max=0,count=0,flag=0,flag2=0;
        scanf("%d",&n);
        char s[n+1],c[2];
        scanf("%s",c);
        scanf("%s",s);
        if(c[0]=='g') printf("0\n");
        else{
            for(int i=0;i<n;i++){
                if(flag2==0 && s[i]=='g') flag2=i+1;
                if(flag==1) count++;
                if(s[i]==c[0]) flag=1;
                if(s[i]=='g'){
                    flag=0;
                    if(max<count) max=count;
                    count=0;
                }
            }
            if(flag==1 && max<flag2+count) max=flag2+count;
            printf("%d\n",max);
        }
    }
}