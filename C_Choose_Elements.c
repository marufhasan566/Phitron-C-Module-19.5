#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        // printf("%lld ", arr[i]);
        // Here we are omitting the values that are less than 0 because it will reduce the maximum sum if add it to the existing sum. (** We can take at most k values to get the maximum sum. That means we can take less than k values to get the sum **)
        if (arr[i] < 0)
        {
            break;
        }
        sum = sum + arr[i];
    }
    // printf("\n");
    printf("%lld \n", sum);
    return 0;
}