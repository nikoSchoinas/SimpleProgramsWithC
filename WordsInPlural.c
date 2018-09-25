#include<stdio.h>
#include<string.h>
#include<ctype.h>
/*A simple program that prompts the user to give a word so it turns it in plural.
WARNING: The program does not handle the exceptions. For example the word matrix
it will be matrixes (wrong!!!) and not matrices (right).*/
void RegularPluralForm(char word[]);
main()
{
    char word[21];
    char words[7][21]={"fox","coach","slash","gas","city","spy","game"};
    char temporary[21];
    int i;
    printf("Give a word to turn it into plural: ");
    gets(word);
    RegularPluralForm(word);
    printf("The Plural is %s\n",word);
    for(i=0;i<7;i++)
    {
        strcpy(temporary,words+i);
        printf("The plural of the word %s is:",temporary);
        RegularPluralForm(temporary);
        printf(" %s\n",temporary);

    }

}
void RegularPluralForm(char word[])
{
    char last,prelast;
    int len;
    len=strlen(word);
    last=word[len-1];
    prelast=word[len-2];
    if(last=='s'||last=='x'||(last=='h'&&prelast=='c')||(last=='h'&& prelast=='s'))
    {
        word[len]='e';
        word[len+1]='s';
        word[len+2]='\0';

    }
    else if(last=='y'&&(prelast!='a'&&prelast!='e'&&prelast!='i'&&prelast!='o'&&prelast!='u'))
    {
        word[len-1]='i';
        word[len]='e';
        word[len+1]='s';
        word[len+2]='\0';
    }
    else
    {
        word[len]='s';
        word[len+1]='\0';
    }
    }
