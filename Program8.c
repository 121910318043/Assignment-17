#include<stdio.h>
//Write a program in C to copy one string to another string.
int main()
{
    int i; char str1[30],str2[30];
    printf("Enter first string: ");
    fgets(str1,30,stdin);
    for(i=0;str1[i];i++)
    {
        str2[i]=str1[i];
    }
    printf("%s",str2);
    return 0;
}
