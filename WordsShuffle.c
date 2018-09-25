#include<stdio.h>
#include<string.h>
#include<ctype.h>
/*A simple program that prompts the user to give a word so it will shuffle its letters. */
main()
{
    char word[10];
    int x,y,z,i,len;
    char temp;
    printf("Word to shuffle: ");
    gets(word);
    len=strlen(word);
    printf("Initial word: %s, ",word);
    x=(rand()%10)+1;/*x is a random number between 0 and 10 that indicates the number of repetitions.*/
    for(i=0;i<x;i++)
    {
        y=rand()%(len-1);
        z=rand()%(len-1);
        temp=word[y];
        word[y]=word[z];
        word[z]=temp;
    }
    printf("New word: %s",word);
}
