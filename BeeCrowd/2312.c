#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char st[n][100];
    int g[n],s[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d %d",&st[i],&g[i],&s[i],&b[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(g[i]<g[j]){
                int tem=g[j];
                g[j]=g[i];
                g[i]=tem;
                tem=s[j];
                s[j]=s[i];
                s[i]=tem;
                tem=b[j];
                b[j]=b[i];
                b[i]=tem;
                char st2[50];
                strcpy(st2,st[j]);
                strcpy(st[j],st[i]);
                strcpy(st[i],st2);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(g[i]==g[j]){
            if(s[i]<s[j]){
                int tem=g[j];
                g[j]=g[i];
                g[i]=tem;
                tem=s[j];
                s[j]=s[i];
                s[i]=tem;
                tem=b[j];
                b[j]=b[i];
                b[i]=tem;
                char st2[50];
                strcpy(st2,st[j]);
                strcpy(st[j],st[i]);
                strcpy(st[i],st2);
            }
            }
            else{
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(g[i]==g[j] && s[i]==s[j]){
            if(b[i]<b[j]){
                int tem=g[j];
                g[j]=g[i];
                g[i]=tem;
                tem=s[j];
                s[j]=s[i];
                s[i]=tem;
                tem=b[j];
                b[j]=b[i];
                b[i]=tem;
                char st2[50];
                strcpy(st2,st[j]);
                strcpy(st[j],st[i]);
                strcpy(st[i],st2);
            }
            }
            else{
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(g[i]==g[j] && s[i]==s[j] && b[i]==b[j]){
            if(strcmp(st[i],st[j])>0){
                int tem=g[j];
                g[j]=g[i];
                g[i]=tem;
                tem=s[j];
                s[j]=s[i];
                s[i]=tem;
                tem=b[j];
                b[j]=b[i];
                b[i]=tem;
                char st2[50];
                strcpy(st2,st[j]);
                strcpy(st[j],st[i]);
                strcpy(st[i],st2);
            }
            }
            else{
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s %d %d %d\n",st[i],g[i],s[i],b[i]);
    }
}