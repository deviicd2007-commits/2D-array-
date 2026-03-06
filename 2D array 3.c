#include <stdio.h>
int main()
{
    int R,C;
    scanf("%d %d",&R,&C);
    int a[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    int maxUnique = -1;
    int deptIndex = -1;
     for(int i=0;i<R;i++)
    {
        int uniqueCount = 0;

        for(int j=0;j<C;j++)
        {
            int count = 0;

            for(int k=0;k<C;k++)
            {
                if(a[i][j] == a[i][k])
                    count++;
            }

            if(count == 1)
                uniqueCount++;
        }

        if(uniqueCount > maxUnique)
        {
            maxUnique = uniqueCount;
            deptIndex = i;
        }
    }

    printf("%d",deptIndex);

    return 0;
}