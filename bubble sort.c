#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    int *array;
    int n;
    int tmp;
    int i;
    int noSwap;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    array = (int*)malloc(n * sizeof(int));
    printf("enter array of elements:\n");
    for(i = 0; i < n; i++)
    scanf(" %d", &array[i]);
    
    for(i = n - 1; i >= 0; i--)
    {
        noSwap = 1;
        for(int j = 1; j < i; j++)
        {
            if(array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                noSwap = 0;
            }
        }
        if(noSwap == 1)
        break;
    }
    
    printf("Sorted array:");
    for(i = 0; i < n; i++)
    printf(" %d", array[i]);
    free(array);
    return 0;
}
