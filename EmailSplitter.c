#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 80
/*A simple program that takes an email address and splits it into name and server.*/
void removeSpaces(int size, char tab[size]);

main()
{
    char str[LEN], name[LEN], server[LEN];
    int index, i;

    printf("Give email address: ");
    gets(str);
    removeSpaces(LEN, str);

    index=0;
    while (str[index] != '@')
         index++;
    strncpy(name, str, index);
    name[index]='\0';

    strncpy(server, str+index+1, strlen(str)-index);

    printf("Name: %s - Length: %d\n", name, strlen(name));
    printf("Server: %s\n", server);

}

void removeSpaces(int size, char tab[size])
{
    int i, j;

    j=0;
    for (i=0;i<=strlen(tab); i++)
    {
        if (tab[i]!=' ')
        {
            tab[j] = tab[i];
            j++;
        }
    }
}
