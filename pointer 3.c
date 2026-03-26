#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
    int count = 0;
    fgets(str, 100, stdin);
    ptr = str;
    while(*ptr != '\0')
    {
        if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||
           *ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
        {
            count++;
        }
        ptr++;
    }
    printf("%d", count);
    return 0;
}