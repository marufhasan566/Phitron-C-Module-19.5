#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    // printf("%d\n", min);
    // Check
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (min == arr[i])
        {
            sum++;
        }
    }
    if (sum % 2 == 1)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }

    return 0;
}