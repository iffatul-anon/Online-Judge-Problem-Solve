#include<stdio.h>
#include<string.h>
int main(){
    int m,x=0,y=0,z=0,min=10000,f=0;
    scanf("%d",&m);
    char s1[m+1],s2[m+1],s3[m+1];
    scanf("%s %s %s",s1,s2,s3);
    for(int i=0;i<10;i++){
        f=0;
        int j;
        for(j=0;j<m;j++){
            if(s1[j]-'0'==i){
                f=1;
                break;
            }
        }
        if(f==1){
            for(j=j+1;j<m;j++){
                if(s2[j]-'0'==i){
                    f=2;
                    break;
                }
            }
        }
        if(f==2){
            for(j=j+1;j<m;j++){
                if(s3[j]-'0'==i){
                    f=3;
                    break;
                }
            }
        }
        if(f==3 && min>j) min=j;
    }
    for(int i=0;i<10;i++){
        f=0;
        int j;
        for(j=0;j<m;j++){
            if(s1[j]-'0'==i){
                f=1;
                break;
            }
        }
        if(f==1){
            for(j=j+1;j<m;j++){
                if(s3[j]-'0'==i){
                    f=2;
                    break;
                }
            }
        }
        if(f==2){
            for(j=j+1;j<m;j++){
                if(s2[j]-'0'==i){
                    f=3;
                    break;
                }
            }
        }
        if(f==3 && min>j) min=j;
    }
    for(int i=0;i<10;i++){
        f=0;
        int j;
        for(j=0;j<m;j++){
            if(s2[j]-'0'==i){
                f=1;
                break;
            }
        }
        if(f==1){
            for(j=j+1;j<m;j++){
                if(s1[j]-'0'==i){
                    f=2;
                    break;
                }
            }
        }
        if(f==2){
            for(j=j+1;j<m;j++){
                if(s3[j]-'0'==i){
                    f=3;
                    break;
                }
            }
        }
        if(f==3 && min>j) min=j;
    }
    for(int i=0;i<10;i++){
        f=0;
        int j;
        for(j=0;j<m;j++){
            if(s2[j]-'0'==i){
                f=1;
                break;
            }
        }
        if(f==1){
            for(j=j+1;j<m;j++){
                if(s3[j]-'0'==i){
                    f=2;
                    break;
                }
            }
        }
        if(f==2){
            for(j=j+1;j<m;j++){
                if(s1[j]-'0'==i){
                    f=3;
                    break;
                }
            }
        }
        if(f==3 && min>j) min=j;
    }
    for(int i=0;i<10;i++){
        f=0;
        int j;
        for(j=0;j<m;j++){
            if(s3[j]-'0'==i){
                f=1;
                break;
            }
        }
        if(f==1){
            for(j=j+1;j<m;j++){
                if(s2[j]-'0'==i){
                    f=2;
                    break;
                }
            }
        }
        if(f==2){
            for(j=j+1;j<m;j++){
                if(s1[j]-'0'==i){
                    f=3;
                    break;
                }
            }
        }
        if(f==3 && min>j) min=j;
    }
    for(int i=0;i<10;i++){
        f=0;
        int j;
        for(j=0;j<m;j++){
            if(s3[j]-'0'==i){
                f=1;
                break;
            }
        }
        if(f==1){
            for(j=j+1;j<m;j++){
                if(s1[j]-'0'==i){
                    f=2;
                    break;
                }
            }
        }
        if(f==2){
            for(j=j+1;j<m;j++){
                if(s2[j]-'0'==i){
                    f=3;
                    break;
                }
            }
        }
        if(f==3 && min>j) min=j;
    }
    int a1[10]={0},a2[10]={0},a3[10]={0};
    for(int i=0;i<m;i++) if(a1[s1[i]-'0']==0) a1[s1[i]-'0']=i+1;
    for(int i=0;i<m;i++) if(a2[s2[i]-'0']==0) a2[s2[i]-'0']=i+1;
    for(int i=0;i<m;i++) if(a3[s3[i]-'0']==0) a3[s3[i]-'0']=i+1;
    for(int i=0;i<10;i++){
        x=a1[i]+m+m-1;
        if(a1[i]==0 || a2[i]==0 || a3[i]==0) continue;
        if(a1[i]==a2[i] && a1[i]!=a3[i]){
            x=a1[i]+m-1;
        }
        else if(a1[i]!=a2[i] && a2[i]==a3[i]){
            x=a2[i]+m-1;
        }
        else if(a1[i]==a3[i] && a1[i]!=a2[i]){
            x=a1[i]+m-1;
        }
        else if(a1[i]==a2[i] && a1[i]==a3[i]){
            for(int j=a1[i];j<m;j++){
                if(s1[j]-'0'==i || s2[j]-'0'==i || s3[j]-'0'==i){
                    x=a1[i]+m-1;
                    break;
                }
                else x=a1[i]+m+m-1;
            }
        }
        if(x<min) min=x;
    }
    if(min==10000) min=-1;
    printf("%d\n",min);
}