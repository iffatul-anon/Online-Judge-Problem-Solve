#include<iostream>
#include<set>
using namespace std;
int main(void) {
    int n,x,y;
    set<int> a, b;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d %d",&x,&y);
        a.insert(x);
        b.insert(y);
    }
    if (a.size()!=2 || b.size()!=2) printf("-1\n");
    else printf("%d\n",(*a.rbegin()-*a.begin())*(*b.rbegin()-*b.begin()));
}