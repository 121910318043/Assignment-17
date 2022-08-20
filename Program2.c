#include<stdio.h>
//Write a program to count the occurrence of a given character in a given string.
int main()
{
    int i,c=0;char st[30],ch;
    printf("Enter string: ");
    fgets(st,30,stdin);
    printf("Enter the character to check the occurence: ");
    scanf("%c",&ch);
    for(i=0;st[i];i++)
    {
        if(st[i]==ch)
            c++;
    }
    printf("Occurance of %c = %d",ch,c);
    return 0;
}
