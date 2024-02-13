
#include "MyShell.h"
#include "MyFunctionShell.h"
int main()
{
    wellcome();
    getLocation();
    while (1)
    {
        char *str = inputFromUser();
        puts(str);
        
        char ** argumnts = splitString(str);
        
        for (int i = 0; argumnts[i]!=NULL; i++)
        {
            printf("index-> %d",i);
            
            puts(argumnts[i]);
        
        }
        free(str);
        free(argumnts);
        break;
        
    }

    return 0;
}
void wellcome()
{
    puts("Hello MyShell");
}