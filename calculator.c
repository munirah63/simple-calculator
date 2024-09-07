#include<stdio.h>
double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);
int main()
{
    double m, n; 
    char op;
    //printf("\n This is a clacultor program, you enter two numbers and select an operation to get the result");
    //printf("\nPlease enter first number: ");
    scanf("%lf", &m);
    //printf("\nPlease enter second number: ");
    scanf("%lf", &n);
    //printf("\nPlease enter the operation (+-*/): ");  
    while ((op = getchar()) != '\n' && op != EOF) { }  
    scanf("%c", &op);
    switch(op)
    {
        case '+':
        printf("The result of the addition is: %lf", add(m,n));
        break;
        case '-':
        printf("\nThe result of the subtraction is: %lf", sub(m,n));
        break;
        case '*':
        printf("\nThe result of the multiplication is: %lf", mul(m,n));
        break;
        case '/':
        printf("\nThe result of the division is: %lf", div(m,n));
        break;
        default:
        printf("\n You entered a bad operation, please try again");
    }    
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
double div(double x, double y)
{
    return x/y;
}