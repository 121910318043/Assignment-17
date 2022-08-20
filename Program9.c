#include<stdio.h>
//Write a C program to sort a string array in ascending order.
int main()
{
    int i,j;int t;
    char str[30];
    printf("Enter first string: ");
    fgets(str,30,stdin);
    for(i=0;str[i];i++)
        for(j=0;str[j];j++)
    {
        if(str[i]<str[j])
            {
                t=str[i];
                str[i]=str[j];
                str[j]=t;
            }
    }
    printf("sorted string = %s",str);
    return 0;
}
