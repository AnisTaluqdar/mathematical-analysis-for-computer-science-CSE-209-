#include <stdio.h>
#include <math.h>
int t = 1;

int RF_Josephus(int n)
{
    int k = 0;
    int l,i,o,m=0;

    if(n<=1)
    {

    return 0;
    }

    else if(n%2 == 0)
    {
        for(i=1; k<= n; i++)
        {
            k = i*2;
        }

        k = (i-2)*2;

        n = i-2;

    }
    else if(n%2 == 1)
    {
        for(l=1; m<=n; l++)
        {
            m = l*2;

        }

        m = (l-2)*2;

        for(o=1; k<=n; o++)
        {
            k = m+o;

        }

        k = m+(o-2);

        n = l-2;
    }

    RF_Josephus(n);

    if(k%2==0)
    {
    t = 2*t - 1;
    printf("J(%d) = 2J(%d) - 1 = %d\n",k,n,t);

    }
    else if(k%2==1)
    {
    t = 2*t + 1;
    printf("J(%d) = 2J(%d) + 1 = %d\n",k,n,t);

    }

}

int main()
{
    int n,cf,i,j=0,x=0,z;

    printf("Enter your number: ");

    scanf("%d",&n);

    if(n<1 || n>1000000000)
        {

        printf("\n");

        printf("Enter your number that is greater than 1 and less then 1000000001.");

        return 0;
        }

    printf("\n");

    if (n>=0)
        {
            for(i = 0;n >= j ; i++)
            {
                j = pow(2,i);
            }
        }

    j = pow(2,i-2);

    for(z = 0; n >= x; z++)
        {
            x = j+z;
        }

    x = j+(z-2);
    cf = 2*(z-2) +1;

    printf("Closed Formula: J(2^%d + %d) = 2*%d + 1 = %d\n\n",i-2,z-2,z-2,cf);

    printf("Recursive Formula: \n");

    RF_Josephus(n);

return 0;
}

