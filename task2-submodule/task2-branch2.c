#include <stdio.h>
const float percentage = .12f;
int main()
{
    // Code by Ssekabira Nicholas &copy; 2025

    long salary;
    printf("enter salary: ");

    scanf("%ld", &salary);

    double bonus = (float)salary * percentage;

    printf("bonus: %.2lf\n", bonus);
    return 0;
}