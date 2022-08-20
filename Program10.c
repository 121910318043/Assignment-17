#include<stdio.h>
int main()
{
    char a[20]="Deepu",h[127]={0};
    int i,j;
    for(i=0;a[i];i++)
        for(j=0;j<127;j++)
        if(a[i]==j)
        h[j]=h[j]+1;
    for(i=0;i<127;i++)
        if(h[i]!='\0')
        printf("%c - %d \n",i,h[i]);
    return 0;
}
