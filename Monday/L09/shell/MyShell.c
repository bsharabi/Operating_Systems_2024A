
#include "MyShell.h"
#include "MyFunctionShell.h"
int main()
{
    wellcome();
    while (1)
    {
        getLocation();
        char *str = inputFromUser();
        char **argumnts = splitString(str);

        for (int i = 0; argumnts[i] != NULL; i++)
        {
            printf("index-> %d", i);

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