#include<stdio.h>
//Write a program to calculate the length of the string. (without using built-in method)
int main()
{
    int i;char str[30];
    printf("Enter a String: ");
    fgets(str,30,stdin);
    for(i=0;str[i]!='\0';i++);
        printf("length of string = %d",i-1);
    return 0;
}
