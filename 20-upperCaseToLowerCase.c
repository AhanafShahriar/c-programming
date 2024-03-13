#include <stdio.h>

int main()
{
    char country[] = "BaNGLAdESH";
    int len = 10;
    for(int i=0; i<len; i++)
    {
        if(country[i] <= 'Z' && country[i] >= 'A')
        {
            country[i] = 'a' + (country[i] - 'A');
        }
    }
    printf("%s", country);

    return 0;
}

