// insertion, deletion, searching
#include<stdio.h>
int main()
{
    int arr[100],nelem, choice, i, pos, val;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &nelem);
    printf("Enter the elements of the array: ");
    for(i=0; i<nelem; i++)
    {
        scanf("%d", &arr[i]);
    }
    // numbber to be inserted, position to be inserted
    printf("enter number to be inserted and position to be inserted:");
    scanf("%d %d", &val, &pos);
    for(i=nelem-1; i>=pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = val;
    nelem++;
    printf("Array after insertion:");
    for(i=0; i<nelem; i++)
    {
        printf("%d ", arr[i]);
    }
    // deletione
    printf("\nenter position to be deleted:");
    scanf("%d", &pos);
    for(i=pos-1; i<nelem-1; i++)
    {
        arr[i] = arr[i+1];
    }
    nelem--;
    printf("Array after deletion:");
    for(i=0; i<nelem; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

     
    




}
