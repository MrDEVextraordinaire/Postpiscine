#include <unistd.h>

void fwr(int n);

void mario(int n);

void fspc(int n);

int main(void)
{
    mario(3);
    return 0;
}


void mario(int n)
{
    int col = 0;
    int row = 0;
    int spc = n-1;
    while (col < n)
    {
        fspc(spc);
        fwr(row);
        write(1,"\n",1);
        spc--;
        row++;
        col++;

    }   
    
}

void fwr(int n)
{
    while (n >= 0)
    {
        write(1,"#",1);
        n--;
        
    }
    
}

void fspc(int n)
{
    while (n >= 0)
    {
        write(1," ",1);
        n--;
        
    }
    
}


//        write(1,"#",1);
//        write(1,"\n",1);
//        write(1,"#",1);



/*print a row of 1 hash and then a new line,
now repeat but print 2 instead of 1 before the newline*/