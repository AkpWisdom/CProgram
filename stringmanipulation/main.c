#include <stdio.h>
#include <string.h>

int main()
{
    char pword[] = "variable";

    char name[20];
    char passkey[10];

    printf("input name:");
    scanf("%s", name);

    printf("input password:");
    scanf("%s", passkey);

    int isAuth = strcmp(pword, passkey);

    if (isAuth == 0)
    {
        printf("Access Granted! n\n");
        printf("welcome Mr/Mrs %s\n,name");
    }
    else
    {
        printf("Acess Denied!\npassword Incorrct\n");
    }

    return 0;
}
