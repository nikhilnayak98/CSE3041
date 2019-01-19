/*
*Name: Nikhil Ranjan Nayak
*Regd No: 1641012040
*Desc: Factorial
*/
#include <stdio.h>
int main()
{
    int n, i;
    double factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %ld", n, factorial);
    }

    return 0;
}
