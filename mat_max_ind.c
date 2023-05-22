
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,m,mat[20][20];
    scanf("%d\n%d",&n,&m);
    int *count = (int*)(malloc(n*(sizeof(int))));
    for(int i=0;i<n;i++)
    {
        count[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
            if (mat[i][j] == 1)
            {
                count[i]=count[i]+1;
                // printf("\n%d\n",count[i]);
            }
        }
    }
    int max=count[0];
    for(int i=1;i<n;i++){
        if (count[i] > max)
        {
            max = count[i];
        }
    }
    printf("%d",max);
    
    return 0;
}

