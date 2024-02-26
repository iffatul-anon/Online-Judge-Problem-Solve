#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c1=0,c2=0,c3=0,c4=0,c5=0,x,y,z;
        scanf("%d",&n);
        char t[2],tt[3];
        scanf("%s",t);
        int c[10]={0},d[10]={0},h[10]={0},s[10]={0};
        for(int i=0;i<2*n;i++){
            scanf("%s",tt);
            if(tt[1]=='C') c[tt[0]-'0']=1;
            if(tt[1]=='D') d[tt[0]-'0']=1;
            if(tt[1]=='H') h[tt[0]-'0']=1;
            if(tt[1]=='S') s[tt[0]-'0']=1;
        }
        for(int i=0;i<10;i++) if(c[i]==1) c1++;
        for(int i=0;i<10;i++) if(d[i]==1) c2++;
        for(int i=0;i<10;i++) if(h[i]==1) c3++;
        for(int i=0;i<10;i++) if(s[i]==1) c4++;
        if(t[0]=='C'){
            c5=(c2%2)+(c3%2)+(c4%2);
            if(c5>c1) printf("IMPOSSIBLE\n");
            else{
                c1-=c5;
                if(c1%2) printf("IMPOSSIBLE\n");
                else{
                    //printf("ok\n");
                    x=0,y=0,z=0;
                    if(c2%2){
                        for(int i=x;i<10;i++) {
                            if(d[i]==1){
                                printf("%dD ",i);
                                x=i+1;
                                break;
                            }
                        }
                        for(int i=y;i<10;i++) {
                            if(c[i]==1){
                                printf("%dC\n",i);
                                y=i+1;
                                break;
                            }
                        }
                    }
                    for(int i=x;i<10;i++){
                        if(d[i]==1){
                            z++;
                            printf("%dD ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                    //
                    x=0,z=0;
                    if(c3%2){
                        for(int i=x;i<10;i++) {
                            if(h[i]==1){
                                printf("%dH ",i);
                                x=i+1;
                                break;
                            }
                        }
                        for(int i=y;i<10;i++) {
                            if(c[i]==1){
                                printf("%dC\n",i);
                                y=i+1;
                                break;
                            }
                        }
                    }
                    for(int i=x;i<10;i++){
                        if(h[i]==1){
                            z++;
                            printf("%dH ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                    //
                    x=0,z=0;
                    if(c4%2){
                        for(int i=x;i<10;i++) {
                            if(s[i]==1){
                                printf("%dS ",i);
                                x=i+1;
                                break;
                            }
                        }
                        for(int i=y;i<10;i++) {
                            if(c[i]==1){
                                printf("%dC\n",i);
                                y=i+1;
                                break;
                            }
                        }
                    }
                    for(int i=x;i<10;i++){
                        if(s[i]==1){
                            z++;
                            printf("%dS ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                    //
                    z=0;
                    for(int i=y;i<10;i++){
                        if(c[i]==1){
                            z++;
                            printf("%dC ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                }
            }
        }
        if(t[0]=='D'){
            c5=(c1%2)+(c3%2)+(c4%2);
            if(c5>c2) printf("IMPOSSIBLE\n");
            else{
                c2-=c5;
                if(c2%2) printf("IMPOSSIBLE\n");
                else{
                    //printf("ok\n");
                    x=0,y=0,z=0;
                    if(c1%2){
                        for(int i=x;i<10;i++) {
                            if(c[i]==1){
                                printf("%dC ",i);
                                x=i+1;
                                break;
                            }
                        }
                        for(int i=y;i<10;i++) {
                            if(d[i]==1){
                                printf("%dD\n",i);
                                y=i+1;
                                break;
                            }
                        }
                    }
                    for(int i=x;i<10;i++){
                        if(c[i]==1){
                            z++;
                            printf("%dC ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                    //
                    x=0,z=0;
                    if(c3%2){
                        for(int i=x;i<10;i++) {
                            if(h[i]==1){
                                printf("%dH ",i);
                                x=i+1;
                                break;
                            }
                        }
                        for(int i=y;i<10;i++) {
                            if(d[i]==1){
                                printf("%dD\n",i);
                                y=i+1;
                                break;
                            }
                        }
                    }
                    for(int i=x;i<10;i++){
                        if(h[i]==1){
                            z++;
                            printf("%dH ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                    //
                    x=0,z=0;
                    if(c4%2){
                        for(int i=x;i<10;i++) {
                            if(s[i]==1){
                                printf("%dS ",i);
                                x=i+1;
                                break;
                            }
                        }
                        for(int i=y;i<10;i++) {
                            if(d[i]==1){
                                printf("%dD\n",i);
                                y=i+1;
                                break;
                            }
                        }
                    }
                    for(int i=x;i<10;i++){
                        if(s[i]==1){
                            z++;
                            printf("%dS ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                    //
                    z=0;
                    for(int i=y;i<10;i++){
                        if(d[i]==1){
                            z++;
                            printf("%dD ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                }
            }
        }
        if(t[0]=='H'){
            c5=(c1%2)+(c2%2)+(c4%2);
            if(c5>c3) printf("IMPOSSIBLE\n");
            else{
                c3-=c5;
                if(c3%2) printf("IMPOSSIBLE\n");
                else{
                    //printf("ok\n");
                    x=0,y=0,z=0;
                    if(c2%2){
                        for(int i=x;i<10;i++) {
                            if(d[i]==1){
                                printf("%dD ",i);
                                x=i+1;
                                break;
                            }
                        }
                        for(int i=y;i<10;i++) {
                            if(h[i]==1){
                                printf("%dH\n",i);
                                y=i+1;
                                break;
                            }
                        }
                    }
                    for(int i=x;i<10;i++){
                        if(d[i]==1){
                            z++;
                            printf("%dD ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                    //
                    x=0,z=0;
                    if(c1%2){
                        for(int i=x;i<10;i++) {
                            if(c[i]==1){
                                printf("%dC ",i);
                                x=i+1;
                                break;
                            }
                        }
                        for(int i=y;i<10;i++) {
                            if(h[i]==1){
                                printf("%dH\n",i);
                                y=i+1;
                                break;
                            }
                        }
                    }
                    for(int i=x;i<10;i++){
                        if(c[i]==1){
                            z++;
                            printf("%dC ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                    //
                    x=0,z=0;
                    if(c4%2){
                        for(int i=x;i<10;i++) {
                            if(s[i]==1){
                                printf("%dS ",i);
                                x=i+1;
                                break;
                            }
                        }
                        for(int i=y;i<10;i++) {
                            if(h[i]==1){
                                printf("%dH\n",i);
                                y=i+1;
                                break;
                            }
                        }
                    }
                    for(int i=x;i<10;i++){
                        if(s[i]==1){
                            z++;
                            printf("%dS ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                    //
                    z=0;
                    for(int i=y;i<10;i++){
                        if(h[i]==1){
                            z++;
                            printf("%dH ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                }
            }
        }
        if(t[0]=='S'){
            c5=(c1%2)+(c2%2)+(c3%2);
            if(c5>c4) printf("IMPOSSIBLE\n");
            else{
                c4-=c5;
                if(c4%2) printf("IMPOSSIBLE\n");
                else{
                    //printf("ok\n");
                    x=0,y=0,z=0;
                    if(c2%2){
                        for(int i=x;i<10;i++) {
                            if(d[i]==1){
                                printf("%dD ",i);
                                x=i+1;
                                break;
                            }
                        }
                        for(int i=y;i<10;i++) {
                            if(s[i]==1){
                                printf("%dS\n",i);
                                y=i+1;
                                break;
                            }
                        }
                    }
                    for(int i=x;i<10;i++){
                        if(d[i]==1){
                            z++;
                            printf("%dD ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                    //
                    x=0,z=0;
                    if(c3%2){
                        for(int i=x;i<10;i++) {
                            if(h[i]==1){
                                printf("%dH ",i);
                                x=i+1;
                                break;
                            }
                        }
                        for(int i=y;i<10;i++) {
                            if(s[i]==1){
                                printf("%dS\n",i);
                                y=i+1;
                                break;
                            }
                        }
                    }
                    for(int i=x;i<10;i++){
                        if(h[i]==1){
                            z++;
                            printf("%dH ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                    //
                    x=0,z=0;
                    if(c1%2){
                        for(int i=x;i<10;i++) {
                            if(c[i]==1){
                                printf("%dC ",i);
                                x=i+1;
                                break;
                            }
                        }
                        for(int i=y;i<10;i++) {
                            if(s[i]==1){
                                printf("%dS\n",i);
                                y=i+1;
                                break;
                            }
                        }
                    }
                    for(int i=x;i<10;i++){
                        if(c[i]==1){
                            z++;
                            printf("%dC ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                    //
                    z=0;
                    for(int i=y;i<10;i++){
                        if(s[i]==1){
                            z++;
                            printf("%dS ",i);
                            if(z%2==0) printf("\n");
                        }
                    }
                }
            }
        }
    }
}