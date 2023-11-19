#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1],s2[n+1];
        s2[n]=0;
        scanf("%s",s);
        if(s[0]=='9'){
            int count=0;
            for(int i=n-1;i>=0;i--){
                if(count==1 && s[i]=='9'){
                    s2[i]='1';
                    count=1;
                }
                else if(count==1){
                    s[i]++;
                    if(s[i]=='1'){
                        s2[i]='0';
                        count=0;
                    }
                    else{
                        s2[i]='9'-s[i]+'2';
                        count=1;
                    }
                }
                else{
                    if(s[i]=='0'){
                        s2[i]='1';
                        count=0;
                    }
                    else if(s[i]=='1'){
                        s2[i]='0';
                        count=0;
                    }
                    else{
                        s2[i]='9'-s[i]+'2';
                        count=1;
                    }
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                s2[i]='9'-s[i]+'0';
            }
        }
        printf("%s\n",s2);
    }
}