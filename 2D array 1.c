#include <stdio.h>
int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int salary[R][C];
    int max = -1, second = -1;
    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            scanf("%d", &salary[i][j]);
            if(salary[i][j] > max)
            {
                second = max;
                max = salary[i][j];
            }
            else if(salary[i][j] > second && salary[i][j] < max)
            {
                second = salary[i][j];
            }
        }
    }
    printf("%d", second);
    return 0;

}
