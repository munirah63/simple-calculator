#include<stdio.h>
double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
int main()
{
    double m=5, n=6;    
    printf("The result of the addition is: %lf", add(m,n));
    printf("\nThe result of the subtraction is: %lf", sub(m,n));
    printf("\nThe result of the multiplication is: %lf", mul(m,n));

}
double add(double x, double y)

{
    return x+y;
}
double sub(double x, double y)
{
    return x-y;
}
double mul(double x, double y)
{
    return x*y;
}