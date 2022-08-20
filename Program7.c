#include<stdio.h>
//Write a program in C to count the total number of alphabets, digits and special characters in a string.
int main()
{
    int i,alphabet=0,digit=0,special=-1;
    char str[30];
    printf("Enter a string: ");
    fgets(str,30,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        alphabet++;
        else if(str[i]>='0' && str[i]<='9')
            digit++;
        else if(str[i] != ' ')
           special++;
    }
    printf("alphabet = %d digit = %d special = %d",alphabet,digit,special);
}
