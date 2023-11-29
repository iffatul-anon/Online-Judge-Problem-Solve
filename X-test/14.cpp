#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,c=0;
        scanf("%d %d",&n,&x);
        int a[n],b[n],ab[n];
        vector<pair<int,int> > v1(n),v2(n);
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            v1[i].first=a[i];
            v1[i].second=i;
            ab[i]=0;
        }
        for(int i=0;i<n;i++) {
            scanf("%d",&b[i]);
            v2[i].first=b[i];
            v2[i].second=i;
            if(a[i]>b[i]) c++;
        }
        if(c==x){
            printf("YES\n");
            for(int i=0;i<n;i++) printf("%d ",b[i]);
            printf("\n");
        }
        else{
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            int i=n-1,j=n-1,c1=0,c2=0;
            for(i=n-1;i>=0;i--){
                for(j=j;j>=0;j--){
                    if(v1[i].first>v2[j].first){ 
                        c1++;
                        break;
                    }
                }
            }
            j=0;
            for(i=0;i<n;i++){
                for(j=j;j<n;j++){
                    if(v1[i].first<=v2[j].first){ 
                        c2++;
                        break;
                    }
                }
            }
            c=n-c2;
            //if(c1<x || c>x) printf("NO\n");
            if(c1==x){
                printf("YES\n");
                i=n-1,j=n-1,c1=0,c2=0;
                for(i=n-1;i>=0;i--){
                    for(j=j;j>=0;j--){
                        if(v1[i].first>v2[j].first){ 
                            ab[v1[i].second]=v2[j].first;
                            v2[j].first=-1;
                            break;
                        }
                    }
                    if(j<0) break;
                }
                j=0;
                for(i=i;i>=0;i--){
                    for(j=j;j<n;j++){
                        if(v2[j].first!=-1){
                            ab[v1[i].second]=v2[j].first;
                            v2[j].first=-1;
                            break;
                        }
                    }
                }
                for(int i=0;i<n;i++) printf("%d ",ab[i]);
                printf("\n");
            }
            else if(c==x){
                printf("YES\n");
                j=0;
                for(i=0;i<n;i++){
                    for(j=j;j<n;j++){
                        if(v1[i].first<=v2[j].first){ 
                            ab[v1[i].second]=v2[j].first;
                            v2[j].first=-1;
                            break;
                        }
                    }
                    if(j==n) break;
                }
                j=n-1;
                for(i=i;i<n;i++){
                    for(j=j;j>=0;j--){
                        if(v2[j].first!=-1){
                            ab[v1[i].second]=v2[j].first;
                            v2[j].first=-1;
                            break;
                        }
                    }
                }
                for(int i=0;i<n;i++) printf("%d ",ab[i]);
                printf("\n");
            }
            else printf("NO\n");
        }
    }
}