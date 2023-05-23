#include <stdio.h>
int main()
{
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == b)
        {
            printf("Square\n");
        }
        if (a != b)
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}