#include <stdio.h>

const float Tax_Rate = 0.12f;
int main()
{

    double price;
    printf("Enter price: ");
    scanf("%lf", &price);

    double total_price = price + (price * Tax_Rate);
}