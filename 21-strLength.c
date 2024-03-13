#include <stdio.h>

int str_length(char str[])
{
    int i, len = 0;
    for(i=0; str[i]!='\0'; i++)
    {
        len++;
    }
    return len;

}

int main()
{
    char country[100];
    int length;

    //int val = scanf("%d %d", &n1,  &n2); -- val's value will be 2
    while(1 == scanf("%s", country))// string scanf er khetre ampersand lage na
    {
        length = str_length(country);
        printf("%d\n", length);
    }

    return 0;
}
