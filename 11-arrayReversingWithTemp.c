#include <stdio.h>

int main()
{
    int arr[] = {12, 34, 53, 13, 134, 200};
    int temp;
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("%d ", length);
    for(int i=0, j=(length-1); i<length/2; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0; i<length;i++)
    {
        printf("%d ", arr[i]);
    }

}
