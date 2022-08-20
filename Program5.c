#include<stdio.h>
//Write a program to convert a given string into lowercase.
int main()
{
    int i;char str[30];
    printf("Enter a string: ");
    fgets(str,30,stdin);
    for(i=0;str[i];i++)
    if(str[i]>='A' && str[i]<='Z')
        str[i]=str[i]+32;
    printf("Lower case character = %s",str);
    return 0;
}
