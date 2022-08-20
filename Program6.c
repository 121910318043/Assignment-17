#include<stdio.h>
//Write a program to reverse a string.
int main()
{
    int i;char str[30];
    printf("Enter a string: ");
    fgets(str,30,stdin);
    for(i=0;str[i];i++);
    printf("Reverse of String = ");
    for(i=i-1;i>-1;i--)
        printf("%c",str[i]);
    return 0;
}
