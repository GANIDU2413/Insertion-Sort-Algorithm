#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[20],i,n,k,j;

    printf("\nenter size of array : ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("\nenter ur data [%d] : ",i);
        scanf("%d",&arr[i]);
    }
    int temp;// 0
    for ( k = 1; k < n; k++)
    {
        temp = arr[k];
        j=k-1;
        while (temp<arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        
    }

    printf("\narray is :");
    for ( i = 0; i < n; i++)
    {
        printf("-> [%d]",arr[i]);
    }
    
    
    


    return 0;
}
