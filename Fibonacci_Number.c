#include <stdio.h>
long long int a = 0;
long long int b = 1;
long long int c = 1;

int Fibonacci(int n)
{
    if(n==1 || n==2)
    {
        return 0;

    }
    a = b + c;
    c = b;

    printf("%lld  ", a);

    b = a;

    Fibonacci(n-1);

}

int main()
{
    int n;

    printf("Enter your number: ");

    scanf("%d",&n);

    if(n<0 || n>92)
        {

            printf("\n");

            printf("Enter your number that is greater than -1 and less then 93.");

            printf("\n");

            return 0;
        }

    printf("\n");

    printf("Fn = ");

    if(n == 0)
    {
        printf("%lld  ",a);

        printf("\n");

        return 0;
    }
    else if(n == 1)
    {
        printf("%lld  ",a);
        printf("%lld  ",b);

    }
    else
    {
        printf("%lld  ",a);
        printf("%lld  ",b);
        printf("%lld  ",c);
    }

    Fibonacci(n);

    printf("\n");

    return 0;
}
