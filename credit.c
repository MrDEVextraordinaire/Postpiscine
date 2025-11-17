#include <stdio.h>

int sumdigits(long n); //collects, multiplies by 2, if d > 9 breaks it down and sums it with the rest
int sumrest(long n); // sums the digits that were skipped
int checklen(long n); //takes cardnumber and returns length
char *checkcompany(long n); //takes card number and returns the company namem also checks invalid


int main(void)
{
    //long n =  9876543218765432;
    long n = 378282246310005;  // for testing
    int s = 0;
    int r = 0;
    int fs = 0;
    int len;
    char *name;
    len = checklen(n);
    name = checkcompany(n);
    printf("init len: %i\n",len);
    
    printf("name: %s\n",name);
    
    if (len == 0 || name == "INVALID\n")
        printf("%s", name);
    else
    { 
        s = sumdigits(n);
        r = sumrest(n);
        fs = s + r;
        if (fs % 10 == 0)
            printf("%s",name);
        else
            printf("INVALID\n");
    }
        printf("fs: %d\n",fs);
}


int checklen(long n)
{

    int l = 0;
    if (340000000000000 < n && n < 349999999999999) //ae
        l = 15;
    if (370000000000000 < n && n < 379999999999999) //ae
        l = 15;
    
    if (5100000000000000 < n && n < 5599999999999999) //mc
        l = 16;
    
    if (4000000000000 < n && n < 4999999999999) //vs
        l = 13;
    if (4000000000000000 < n && n <  4999999999999999) //vs
        l = 16;

    return l;
}

char *checkcompany(long n)
{

    char* c;
    if (340000000000000 < n && n < 349999999999999) //ae
        c = "AMEX\n";
    else if (370000000000000 < n && n < 379999999999999) //ae
        c = "AMEX\n";
    
    else if (5100000000000000 < n && n < 5599999999999999) //mc
        c = "MASTERCARD\n";
    
    else if (4000000000000 < n && n < 4999999999999) //vs
        c = "VISA\n";
    else if (4000000000000000  < n && n < 4999999999999999) //vs
        c = "VISA\n";
    else
        c = "INVALID\n";

    return c;
}



int sumdigits(long n)
{
    long modder = 100;
    long divider = 10;
    long digit = 0;
    long modded = 0;
    int i = 0;
    int multiplied = 0;
    int sum = 0;
    int len = checklen(n);
    printf("len: %i\n",len);
    while (i < len/2)
    {
        modded = n % modder;
        printf("modded: %li\n",modded);
        digit = modded / divider;
        printf("digit: %li\n",digit);
        multiplied = digit * 2;
        printf("multipllied: %i\n",multiplied);
        if (multiplied > 9)
            multiplied =  (multiplied / 10) + (multiplied % 10);
        printf("if multipllied summed: %i\n",multiplied);
        sum = sum + multiplied;
        printf("sumdigits: %i\n",sum);
        modder *= 100;
        divider *= 100;
        printf("iteration: %i\n",i+1);
        i++;
        
    }
    return sum;
}   

int sumrest(long n)
{
    long modder = 10;
    long divider = 1;
    long digit = 0;
    long modded = 0;
    int i = 0;
    int multiplied = 0;
    int sum = 0;
    int len = checklen(n);
    if (!(len % 2 == 0))
        i = i-1;
    while (i < len/2)
    {
        modded = n % modder;
        digit = modded / divider;
        sum = sum + digit;
        divider *= 100;
        modder *= 100;
        i++;
    }
    return sum;
}
