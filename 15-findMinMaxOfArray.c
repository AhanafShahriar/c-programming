#include <stdio.h>

int find_max(int ar[], int len);
int find_min(int ar[], int len);

int main()
{
    int arr[] = {12, 87, 23, 93, 193, 97, 28, 19, 57, 98}, min_el, max_el;

    max_el = find_max(arr, 10);
    min_el = find_min(arr, 10);

    printf("Highest Number in the array is: %d\n", max_el);
    printf("Lowest Number in the array is: %d", min_el);

    return 0;
}

int find_max(int arr[], int size)
{
    int max = arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int find_min(int arr[], int size)
{
    int min = arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
