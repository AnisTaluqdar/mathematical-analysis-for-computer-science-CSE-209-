#include <stdio.h>
float z = 0;
int d = 0;

int Harmonic(int n)
{
    float c = 1;

    if(n<=0)
    {

        return 0;
    }

    d++;

    Harmonic(n-1);

    printf("1/%d",n);

    if(n == d)
    {
        printf(" = ");
    }
    else
    {
        printf(" + ");
    }

    z = z+(c/n);

}

int main()
{

    int n;


    printf("Enter your number: ");

    scanf("%d",&n);

    if(n<1 || n>174500)
        {

            printf("\n");

            printf("Enter your number that is greater than -1 and less then 174501.");

            printf("\n");

            return 0;
        }

    printf("\n");

    printf("Hn = ");

    Harmonic(n);

    printf("%f",z);

    printf("\n");

    return 0;
}
