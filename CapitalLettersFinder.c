#include<stdio.h>
#include<string.h>
#include<ctype.h>
/*A simple program that prompts the user to give a sentence so it computes the
frequency of the capital letters. */

void FindCapitalLetter(char tab[],char L);
main()
{
    char str[26];
    char i;
    printf("Give a sentense to find all capital letters:");
    gets(str);
    for(i=65;i<=90;i++)
    FindCapitalLetter(str,i);

}
void FindCapitalLetter(char tab[],char L)
{
    int i,counter;
    counter=0;
    for(i=0;i<=strlen(tab);i++)
    {
        if(tab[i]==L)
            counter++;
    }
    if(counter!=0)
    printf("%c--> %d\n",L,counter);
}
