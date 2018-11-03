#include<stdio.h>
#include<conio.h>
main()
{
    char st[100];
    int i,l,n;
    printf("Enter the string\n");
    scanf("%s",st);
    l=strlen(st);
    printf("Enter length of last n characters\n");
    scanf("%d",&n);
    char str[n];
    for(i=0;i<n;i++)
    {
       str[i]=st[l-n+i];
    }
    str[n]='\0';
    printf("New string is : %s",str);
    getch();
}
