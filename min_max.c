// #include<stdio.h>
// struct min_max{
//     int min;
//     int max;
// };
// struct min_max first,left,right;
// struct min_max sort(int arr[],int low,int high)
// {
//     int mid = (high - low)/2;
//     if (mid == 0)
//     {
//         first.min = arr[mid];
//         first.max = arr[mid];
//     }

//     else if(high = low + 1)
//     {
//         if (arr[high] > arr[low])
//         {
//             first.max = arr[high];
//             first.min = arr[low];
//         }
//         if (arr[high] < arr[low])
//         {
//             first.min = arr[high];
//             first.max = arr[low];
//         }
//     }

//     else{
//         left = sort(arr,low,mid);
//         right = sort(arr,mid+1,high);
//         if (left.min<right.min)
//         {
//             first.min = left.min;
//         }
//         else
//         {
//             first.min = right.min;
//         }
//         if (left.max>right.max)
//         {
//             first.max = left.max;
//         }
//         else
//         {
//             first.max= right.max;
//         }

//         return first;

//     }


    
// }
// int main(){
//     int arr,n,i=0,max_min[2];
//     printf("Enter the number of elements of the array\n");
//     scanf("%d",&n);
//     printf("Enter the elements of the array\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     struct min_max qn = sort(arr,0,n-1);

// }

#include <stdio.h>

struct min_max {
    int min;
    int max;
};

struct min_max first, left, right;
int count = 0;

struct min_max sort(int arr[], int low, int high) {
    int mid = low + (high - low) / 2;
    
    if (low == high) {
        first.min = arr[low];
        first.max = arr[low];

    } else if (high == low + 1) {
        if (arr[high] > arr[low]) {
            first.max = arr[high];
            first.min = arr[low];
        } else {
            first.min = arr[high];
            first.max = arr[low];
        }
    } else {
        left = sort(arr, low, mid);
        right = sort(arr, mid + 1, high);
        
        if (left.min < right.min) {
            first.min = left.min;
        } else {
            first.min = right.min;
        }
        
        if (left.max > right.max) {
            first.max = left.max;
        } else {
            first.max = right.max;
        }
    }
    
    return first;
}

int main() {
    int arr[100], n, i = 0;
    
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    struct min_max qn = sort(arr, 0, n - 1);
    
    printf("Minimum value: %d\n", qn.min);
    printf("Maximum value: %d\n", qn.max);
    
    return 0;
}
