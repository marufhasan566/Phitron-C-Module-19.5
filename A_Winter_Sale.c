#include <stdio.h>
int main()
{
    float discount, price;
    scanf("%f %f", &discount, &price);
    float a = 100 - discount;
    float result = (price * 100) / a;
    printf("%.2f", result);
    return 0;
}