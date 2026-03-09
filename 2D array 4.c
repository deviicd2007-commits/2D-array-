#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            for(int k = i; k < r; k++) {
                int start = (k == i) ? j + 1 : 0;
                for(int l = start; l < c; l++) {
                    if(a[i][j] == a[k][l]) {
                        printf("%d", a[i][j]);
                        return 0;
                    }
                }
            }

        }
    }
    return 0;
}