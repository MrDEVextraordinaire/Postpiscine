#include<stdio.h>

int change(int n);

int main()
{
    int n;
    printf("How much change: ");
    scanf("%d", &n);

    if (n > 0)
    {
        int c;
        c = change(n);
        printf("%d", c);
        printf("\n");
    }
    else 
    {
        printf("please input an appropriate change amount");
        main();
    }



}


int change(int n)
{
    int q = 0;
    int d = 0;
    int ni = 0;
    int p = 0;
    if ((n / 25) > 0)
    {
        q = n / 25 ;
        n = n - (q*25);
    }

    if ((n / 10) > 0)
    {
        d = n / 10;
        n = n - (d*10);
    }

    if ((n / 5) > 0)
    {
        ni = n / 5;
        n = n - (ni * 5);
    }

    if (n < 5)
    {
        p = n;
    }

    return q + d + ni + p;
}
