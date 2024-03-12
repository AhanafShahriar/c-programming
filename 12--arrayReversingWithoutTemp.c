#include <stdio.h>

int main()
{
    int arr[] = {12, 45, 656, 76, 78, 23};
    int length = sizeof(arr) / sizeof(arr[0]);
    int temp_arr[length], i, j;

    for(i = 0, j = length -1; i < length; i++, j--)
    {
        temp_arr[i] = arr[j];
    }
    for(i = 0; i < length; i++)
    {
        arr[i] = temp_arr[i];
    }
    for(i=0;i<length;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;

}
