#include <stdio.h>

void binary_search(int ara[], int low, int high, int key);

int main()
{
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    binary_search(ara, 0, 15, 11);

}

void binary_search(int arr[], int low_idx, int high_idx, int searchingNum)
{
    int mid_idx;

    while(low_idx <= high_idx)
    {
        mid_idx = (low_idx + high_idx) / 2;
        if(arr[mid_idx] == searchingNum)
        {
            break;
        }
        else if(arr[mid_idx] > searchingNum)
        {
            high_idx = mid_idx - 1;
        }
        else
        {
            low_idx = mid_idx + 1;
        }
    }
    if(low_idx > high_idx) printf("%d is not in the array", searchingNum);
    else printf("%d is found in the array. It is the %dth element of the array at index %d", searchingNum, mid_idx+1, mid_idx);

}
