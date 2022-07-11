#include <stdio.h>

long factorial(int n)
{
    if (n <= 1)
    {
        return 1l;
    }

    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    long f = factorial(n);
    printf("Factorial of %d is %ld\n\n", n, f);
}