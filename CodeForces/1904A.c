#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,xk,yk,xq,yq,c=0,f=0;
        scanf("%d %d %d %d %d %d",&a,&b,&xk,&yk,&xq,&yq);
        int kx[8],ky[8],qx[8],qy[8],x[8],y[8];
        kx[0]=xk+a;
        ky[0]=yk+b;
        kx[1]=xk+a;
        ky[1]=yk-b;
        kx[2]=xk-a;
        ky[2]=yk+b;
        kx[3]=xk-a;
        ky[3]=yk-b;
        kx[4]=xk+b;
        ky[4]=yk+a;
        kx[5]=xk+b;
        ky[5]=yk-a;
        kx[6]=xk-b;
        ky[6]=yk+a;
        kx[7]=xk-b;
        ky[7]=yk-a;

        qx[0]=xq+a;
        qy[0]=yq+b;
        qx[1]=xq+a;
        qy[1]=yq-b;
        qx[2]=xq-a;
        qy[2]=yq+b;
        qx[3]=xq-a;
        qy[3]=yq-b;
        qx[4]=xq+b;
        qy[4]=yq+a;
        qx[5]=xq+b;
        qy[5]=yq-a;
        qx[6]=xq-b;
        qy[6]=yq+a;
        qx[7]=xq-b;
        qy[7]=yq-a;

        for(int i=0;i<8;i++) {
            for(int j=0;j<8;j++) {
                if(kx[i]==qx[j] && ky[i]==qy[j]) {
                    f=0;
                    for(int k=0;k<c;k++){
                        if(kx[i]==x[k] && ky[i]==y[k]){
                            f=1;
                            break;
                        }
                    }
                    if(f==0){
                        x[c]=kx[i];
                        y[c]=ky[i];
                        c++;
                    }
                }
            }
        }
        printf("%d\n",c);
    }
}