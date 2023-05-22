
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,c,d;
    scanf("%d",&n) ;
    while(n)
    {   
        // printf("inside while");
        int count = 0;
        scanf("%d %d",&c,&d);
        for(int i=c;i<=d;i++)
        {
            float x = sqrt(i);
            int y = x;
            if(x == y)
            {
                count++;
            }
        }
        printf("%d",count);
        n--;
    }
}
   