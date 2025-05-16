#include <stdio.h>

int main()
{
    const int amount = 3500;
    const float usd;

    printf("Enter the amount in USD: ");
    scanf("%f", &usd);

    double exchange = (float)amount * usd;

    printf("You get ugsh %.2lf when you have usd %.3f", exchange, usd);
    return 0;
}