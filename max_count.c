#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int dc(int arr[],int min,int max)
{
    if (min == max)
    {
        return arr[min];
    }
    else
    {
        int mid = (max +  min)/2;
        int left = dc(arr,min,mid);
        // printf("%d",left);
        int right = dc(arr,mid+1,max);
        // printf("%d",right);
        if (left > right)
        {
            return left;
        }
        else
        {
            return right;
        }
    }


}

int main() {
    
    int n,arr[20],new;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    printf("Length of array\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
     new = dc(arr,0,n-1);
    //  printf("\n%d\n",new);
    for(int i=0;i<n;i++)
    {
        if (arr[i]==new)
        {
            count++;
            
        }
        
    }
    printf("Maximum no of occurence: %d",count);
    return 0;
}



    

