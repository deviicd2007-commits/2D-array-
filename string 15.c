#include <stdio.h>
int main() {
    char str[200];
    int i = 0, spaces = 0, words;
    fgets(str, 200, stdin);
    while(str[i] != '\0') {
        if(str[i] == ' ')
            spaces++;
        i++;
    }
    words = spaces + 1;
    printf("%d", words);
    return 0;
}