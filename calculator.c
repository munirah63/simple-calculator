// This is a simple calculator program
// by Munirah Althefeery
#include<stdio.h>

// functions prototypes
double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);
int main()
{
    // declaring needed variables
    double m, n; 
    char op;
    // data input
    printf("\n This is a clacultor program, you enter two numbers and select an operation to get the result");
    printf("\nPlease enter first number: ");
    scanf("%lf", &m);
    printf("\nPlease enter second number: ");
    scanf("%lf", &n);
    printf("\nPlease enter the operation (+-*/): ");  
    while ((op = getchar()) != '\n' && op != EOF) { }  
    scanf("%c", &op);
    // processing
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
        //error handling for invalid inputs
        default:
        printf("\n You entered a bad operation, please try again");
    }    
}
// a functio to perform the addition
double add(double x, double y)
{
    return x+y;
}
// a functio to perform the sunbraction
double sub(double x, double y)
{
    return x-y;
}
// a functio to perform the multiplication
double mul(double x, double y)
{
    return x*y;
}
// a functio to perform the division
double div(double x, double y)
{
    return x/y;
}