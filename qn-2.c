/*2. Write a program to sort 10 city names stored in two dimensional arrays, taken from 
the user.*/


#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[10][10],k[10];

    printf("enter 3 cites name:\n");
    for(i=0;i<3;i++)
    gets(a[i]);

    for(i=0;i<3;i++)
    {
        for(j=1+i;j<3;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(k,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],k);
            }
        }
    }
    for(i=0;i<3;i++)
        printf("%s\n",a[i]);



}
