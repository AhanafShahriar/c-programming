#include <stdio.h>

int main()
{
    char str1[] = "Bangla", str2[] = "desh", str3[12];
    int i, j;

    for(i=0; i<6;i++)
    {
        str3[i] = str1[i];
    }
    for(j=0; j<4; j++)
    {
        str3[i] = str2[j];
        i++;
    }
    str3[i] = '\0';
    printf("%s", str3);

    return 0;
}
