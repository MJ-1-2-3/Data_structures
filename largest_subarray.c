#include<stdio.h>
#include<limits.h>
int main(){
    int i,n,arr[10],current, final,sub_start,sub_end;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    current = 0;
    final = INT_MIN;
    int start = 0, end = 0;
    for(i=0;i<n;i++)
    {
        if(current == 0){
            start = i;
            printf("%d",i);

        }
        current += arr[i];
        if(current > final)
        {
            final = current;
            printf("%d",i);
            sub_start = start;
            sub_end = i ;
            
        }
        if(current < 0)
        {
            current = 0;
        }

    }
    printf("The maximum sum of subarray: %d\n",final);
   

    for(i=sub_start;i<=sub_end;i++){
        printf("%d  ",arr[i]);
    }
}