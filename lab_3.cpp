#include <stdio.h>
#include <string.h>

int main()
{
    char s[80];
q
    printf("vvedite text: ");
    fgets(s, 80, stdin);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a') s[i] = 'A';
        else if (s[i] == 'b') s[i] = 'B';
        else if (s[i] == '!') s[i] = '?';
    }
    
    printf("%s", s);
    return 0;
}

