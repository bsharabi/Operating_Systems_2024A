#include "MyFunctionShell.h"

char *inputFromUser()
{
    char ch;
    int size = 0;
    char *str = (char *)malloc((size + 1) * sizeof(char));
    // stdin = hello hello\n
    while ((ch = getchar()) != '\n')
    {
        *(str + size) = ch;
        size++;
        str = (char *)realloc(str, size + 1);
    }
    *(str + size) = '\0';
    return str;
}
char **splitString(char *str)
{
    char *subStr;
    subStr = strtok(str, " ");
    int argumentSize = 2;
    int index = 0;
    char **argumentArray = (char **)malloc(argumentSize * sizeof(char *));
    *(argumentArray + index) = subStr;
    while ((subStr = strtok(NULL, " ")) != NULL)
    {
        index++;
        argumentSize++;
        argumentArray = (char **)realloc(argumentArray, argumentSize * sizeof(char *));
        *(argumentArray + index) = subStr;
    }
    *(argumentArray + index + 1) = NULL;
    return argumentArray;
}
// בפונקציה הנ"ל קיבלנו את הנתיב ממנו אנחנו מריצים את התוכנית שלנו
//  עליכם לשדרג את הנראות של הנתיב כך ש-בתחילת הנתיב יופיע שם המחשב (כמו בטרמינל המקורי) בסוף יופיע הסימן דולר
//  ולאחר הדולר ניתן אפשרות למשתמש להזין מחרוזת מבלי שנרד שורה.
void getLocation()
{
    char location[256];
    if (getcwd(location, sizeof(location)) == NULL)
    {
        puts("Error");
        return;
    }
    printf("\033[0;34m");
    printf("%s$ ", location);
    printf("\033[0m");
}
void logout(char *str)
{
    puts("logout");
    free(str);
    exit(0);
}
void echo(char **arguments)
{
    int i = 1;
    while (arguments[i] != NULL)
        printf("%s ", arguments[i++]);
    puts("");
}
// עליכם לטפל במצבים בהם המשתמש קולט נתיב שמתחיל בסוגריים למשל:
// cd "/mnt/c/Users/ZAsus/OneDrive - Ariel University"
// יש לשלוח את המחרוזת המתחילת בסוגר הראשון עד המחרוזת שנגמרת בסוגר שסוגר אותה וכל מצב אחר יש להחזיר הודעת שגיאה
void cd(char **path)
{
    //[cd,"barak\0, shsh\0, shsh",Null]
    // output -> "barak shsh shsh"
    //[cd,"barak, shsh, shsh,Null]
    // output -> print("bash: cd: "barak: No such file or directory\n")

    //   puts(arguments[1]);
    //         int j = strlen(arguments[1]);
    //         arguments[1][j] = ' ';
    //         puts(arguments[1]);

    //------------------ err ---------------------
    // char* str = cd /mnt/c/Users/ZAsus/OneDrive - Ariel University
    //[cd,/mnt/c/Users/ZAsus/OneDrive,-,Ariel,University]

    // char* str = cd "/mnt/c/Users/ZAsus/OneDrive - Ariel University"
    //[cd, "/mnt/c/Users/ZAsus/OneDrive, -, Ariel, University"]

    // char* str = cd\0"/mnt/c/Users/ZAsus/OneDrive\0-\0Ariel\0University\0"
    //[cd\0, "/mnt/c/Users/ZAsus/OneDrive\0, -\0, Ariel\0, University"\0]

    if (chdir(path[1]) != 0)
        printf("bash: cd: %s: No such file or directory\n", path[1]);
}
// לסדר את המצב בו קיבלתם שם של קובץ שמכיל רווחים גם ב-src  וגם ב- des
void cp(char **arguments)
{
    char ch;
    FILE *src, *des;
    if ((src = fopen(arguments[1], "r")) == NULL)
    {
        puts("Error");
        return;
    }

    if ((des = fopen(arguments[2], "a")) == NULL)
    {
        fclose(src);
        puts("Error");
        return;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, des);

    fclose(src);
    fclose(des);
}
// בכל שינוי יש לבצע קומיט מתאים העבודה מחייבת עבודה עם גיט.
// ניתן להוסיף פונקציות עזר לתוכנית רק לשים לב שלא מוסיפים את חתימת הפונקציה לקובץ הכותרות
