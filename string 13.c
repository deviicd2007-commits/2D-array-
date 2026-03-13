#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    int i = 0, pos = -1;
    scanf("%s", str);
    scanf(" %c", &ch);   
    while(str[i] != '\0') {
        if(str[i] == ch) {
            pos = i;
            break;
        }
        i++;
    }
    printf("%d", pos);
    return 0;
}