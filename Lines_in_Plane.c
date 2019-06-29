#include <stdio.h>
int L=1;

int RF_Plane(int n)
{
    int x,s;
    if(n<=0)
    {
        return 0;
    }

    RF_Plane(n-1);

    L = L + n;

    printf("L%d = L%d + %d = %d\n",n,n-1,n,L);

}

int main()
{
    int n,cf;

    printf("Enter your Line number: ");

    scanf("%d",&n);

    if(n<=0 || n>59999)
        {

        printf("\n");

        printf("Enter your number that is greater than 0 and less then 60000.");

        printf("\n");

        return 0;
        }


    printf("\n");

    if (n>=0)
        cf = (n*(n+1))/2 + 1;

    printf("Closed Formula: (%d*(%d+1))/2 + 1 = %d\n\n",n,n,cf);

    printf("Recursive Formula: \n");

    RF_Plane(n);

return 0;
}

