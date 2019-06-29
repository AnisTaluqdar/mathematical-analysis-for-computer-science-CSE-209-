#include <stdio.h>
#include <math.h>
int T = 0;

int Move_Hanoi(int n,char x[20], char y[20], char z[20])
{
    if(n<=0)
        {
        return 0;
        }
    Move_Hanoi(n-1,x,z,y);

    printf("Move disk %d from %s to %s\n", n,x,y );

    Move_Hanoi(n-1,z,y,x);

}

int RF_Hanoi(int n)
{
    int x,s;
    if(n<=0)
    {
        return 0;
    }

    RF_Hanoi(n-1);

    T = 2*(T) + 1;

    printf("T%d = 2T%d + 1 = %d\n",n,n-1,T);

}

int main()
{
    int n,cf;
    char x[20] = "Source",y[20] = "Destination",z[20] = "Auxiliary";

    printf("Enter your disk number: ");

    scanf("%d",&n);

    if(n<=0 || n>31)
        {

        printf("\n");

        printf("Enter your disk number that is greater than 0 and less then 32.");

        printf("\n");

        return 0;
        }


    if (n>=0)
        cf =  pow(2,n) - 1;

    printf("\n");

    printf("Closed Formula: 2^%d - 1 = %d\n\n",n, cf);

    printf("Recursive Formula: \n");

    RF_Hanoi(n);

    printf("\n");

    printf("Tower of Hanoi Move: \n");

    Move_Hanoi(n,x,y,z);

return 0;
}



