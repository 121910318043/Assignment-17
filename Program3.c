#include<stdio.h>
//Write a program to count vowels in a given string
int main()
{
    int i,c=0;char str[30],ch;
    printf("Enter String: ");
    fgets(str,30,stdin);
    for(i=0;str[i];i++)
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        c++;
    printf("vowels in %s = %d",str,c);
    return 0;
}
