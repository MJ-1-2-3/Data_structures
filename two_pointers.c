#include<stdio.h>
int main()
{
    int arr[10];
    int i, low=0,n,count=0,temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);  
     
    for(i=0; i<n; i++)
    {
        printf("Enter the array elemet %d : \n",(i+1)); 
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            count++;
        }
        
    }
    if(arr[0]==0)
        {
            low++;
            printf("After the first if\n");
        }
    printf("%d\n",count);
    
    while(low < count)
    {
        printf("Inside while\n");
        for(i=low;i<n;i++)
        {
            if (arr[i] == 0)
            {
                arr[i] = arr[low];
                arr[low] = 0;  
                printf("Swap\n");     
            }
            else
            {
                printf("No swap\n");
            }
            
            
        }
        low++;
    }

    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}