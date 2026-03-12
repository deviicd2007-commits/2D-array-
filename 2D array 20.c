#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            int count = 0;
             for(int x = 0; x < r; x++){
                for(int y = 0; y < c; y++){
                    if(a[i][j] == a[x][y]){
                        count++;
                    }
                }
            }
            if(count == 1){
                printf("%d", a[i][j]);
                return 0;
            }
        }
    }
    return 0;
}