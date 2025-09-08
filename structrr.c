#include <stdio.h>

typedef struct
{
    char **name;
    char **job;
} employee;

int main(void)
{

    char* group1[] = {"John", "Michael", "Foxy" };
    char* group2[] = {"Alex", "Brad", "Antoine"};

    char* jobs1[] = {"7eddad","biyyat","le77as"};
    char* jobs2[] = {"nejjar", "chifor", "feminist"};

    employee names[2] = {
        {group1},{group2}
    };
    
    employee jobs[2] = {
        {jobs1}, {jobs2}
    };

    int i = 0;
    printf("here's the first group: ");
    while (i < 3)
    {
        printf("%s l%s, ", names[0].name[i],  jobs1[i] );
        i++;
    }
    
    return 0;
}



