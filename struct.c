#include <stdio.h>
#include <string.h>

typedef struct
{
    char* name;
    char* number;
    char* pet;
} phonebook;

int main(void)
{
    phonebook people[3];
    
    people[0].name = "John";
    people[0].number = "0698564898";
    people[0].pet = "dog";

    people[1].name = "Joe";
    people[1].number = "0698564798";
    people[1]. pet = "cat";


    people[2].name = "Jane";
    people[2].number = "0698484798";
    people[2].pet = "bird";


    int i = 0;
    while (i < 3)
    {
        if (people[i].name == "Joe")
         {
             printf("his name is: %s\n", people[i].name);
             printf("his # : %s\n", people[i].number);
             printf("his favorite pet: %s\n", people[i].pet);
             
             return 0;
         }
        i++;
    }

}