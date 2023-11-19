#include<stdio.h>
int main(){
    int i,j,n,a,b,c,d,e;
    for(i=1; ;i++){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(j=1;j<=n;j++){
            scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
            if(i){
                printf("\n");

            }

            
        }


    }
    
    return 0;
}

/*#include<stdio.h>
#include<errno.h>
#include<string.h>

int main()
{
    FILE * Anon;
    Anon = fopen ("no_file.txt","rb");
    if ( Anon == NULL)
    {
        fprintf(stderr,"Value of errno: %d\n",errno);
        fprintf(stderr,"Error opening file: %s\n",strerror(errno));
        perror("Error printed by perror");
    }
    else
    {
        fclose(Anon);
    }
}

*/