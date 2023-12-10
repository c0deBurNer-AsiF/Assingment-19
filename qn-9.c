/*9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed*/


#include<stdio.h>
int main()
{
    int i,j,x,y=1;
    char str[5][15]={"@asif","@nilufa","@sahaji","@yasmin","@amsif"};
    char a[15];

    printf("list of the users are:\n");
    for(i=0;i<5;i++)
    printf("%s\n",str[i]);

    printf("enter a user name:\n");
    gets(a);

    for(i=0;i<5;i++)
    {
        for(j=0; str[i][j] && a[j]; j++)
        {
            if(str[i][j]!=a[j])
                break;
        }
        if(str[i][j]==a[j])
            break;
    }
    if(str[i][j]==a[j])
    {
        printf("You are allowed to calculate factorial of any number:\n");

        printf("enter a number: ");
        scanf("%d",&x);

        for(i=x;i>0;i--)
            y=y*i;
        printf("factorial of this number is %d",y);
    }
    else
        printf("Error");




}
