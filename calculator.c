#include<stdio.h>
double add(double x, double y);
int main()
{
    double m=5, n=6, result;
    result=add(m,n);
    printf("The result of the addition is: %lf", result);

}
double add(double x, double y)
{
    return x+y;
}