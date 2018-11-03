#include<stdio.h>
#include<conio.h>
int div_loop(n)
{
    int num=n;
    if(num%2==0)
    {
        num=num/2;
        div_loop(num);
    }
    else
        return num;
}
main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    n=div_loop(n);
    printf("Number obtained by dividing by 2 : %d\n",n);
    getch();
}
