#include "myFunction.h"

char *getInputFromUser()
{

    return NULL;
}
void blue(){

    printf("\033[0;34m");
}
void reset(){

     printf("\033[0m");
}
char **splitArgument(char *str)
{
    return NULL;
}

void getLocation()
{
    char location[BUFF_SIZE];

    if (getcwd(location, BUFF_SIZE) == NULL)
    {
        puts("Error");
    }
    else
    {
        blue();
        puts(location);
        reset();
    }
}