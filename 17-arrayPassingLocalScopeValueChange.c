#include <stdio.h>
//whenever a variable is passed to function a copy of the variable is created and worked with in the
//local scope of the function. So the value remains unchanged outside local scope. But when array is pass
//it passes the address. so the array changes outside function too. it does create copy in local scope instead it
//works with the original array.
void test_func(int a[])
{
    a[0] = 100;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};

    test_func(arr);

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
