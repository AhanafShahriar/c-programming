#include <stdio.h>

int main()
{
    char country[] = "Bangladesh";
    int len = 10;
    for(int i=0; i<len; i++)
    {
        if(country[i] <= 'z' && country[i] >= 'a')
        {
            country[i] = 'A' + (country[i] - 'a');
        }
    }
    printf("%s", country);

    return 0;
}
