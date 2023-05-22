#include<stdio.h>

int* rev(int arr[],int x,int y)
{

    if (x>=y)
    {
        return arr;
    }

    int temp;
    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    x++;
    y--;
    arr = rev(arr,x,y);
}
int main()
{
    int n,i,arr[10],temp;
    
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int reve[10] = rev(arr,n-1,0);

}