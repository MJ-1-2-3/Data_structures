#include<stdio.h>
int main()
{
    int n,i,arr[10],temp;
    int *reve[10];
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(i=0;i<=n/2;i++)
   {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
        printf("%d\t",arr[i]);    
        printf("%d\t",arr[n-1-i]);   
        printf("\n");     
    
   }

   printf("The reversed array:\n");
   for(i=0;i<n;i++)
   {
    printf("%d\t",arr[i]);
   }


}