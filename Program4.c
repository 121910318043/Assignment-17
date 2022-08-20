#include<stdio.h>
//Write a program to convert a given string into uppercase.
int main()
{
    int i;char str[30],ch;
    printf("Enter string: ");
    fgets(str,30,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    printf("Upper case = %s",str);
    return 0;
}
