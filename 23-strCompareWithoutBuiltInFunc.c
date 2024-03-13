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

int str_compare(char a[], char b[])
{
    int i;
    for(i=0; a[i]!='\0' && b[i]!='\0'; i++)
    {
        if(a[i] > b[i])
        {
            return 1;
        }
        if(a[i] < b[i])
        {
            return -1;
        }
    }
    if(str_length(a) == str_length(b))
    {
        return 0;
    }
    if(str_length(a) > str_length(b))
    {
        return 1;
    }
    if(str_length(a) < str_length(b))
    {
        return -1;
    }
}

int main()
{
    int res;
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    res = str_compare(str1, str2);
    if(res==1) printf("First string is greater.");
    else if(res==-1) printf("Second string is greater.");
    else printf("Both are equal.");
    return 0;
}
