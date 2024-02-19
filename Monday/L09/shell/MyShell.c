
#include "MyShell.h"
#include "MyFunctionShell.h"
int main()
{
    wellcome();
    while (1)
    {
        getLocation();
        char *str = inputFromUser();
        if (strcmp(str, "exit") == 0)
            logout(str);
        char **argumnts = splitString(str);
        if (strcmp(str, "echo") == 0)
            echo();

        free(str);
        free(argumnts);
    }

    return 0;
}
void wellcome()
{
    puts("Hello MyShell");
}