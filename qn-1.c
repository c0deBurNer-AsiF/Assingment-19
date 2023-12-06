/*1. Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.*/

#include<stdio.h>
int main()
{
    int i,j,k,n;
    char str[5][100],c[11]="aeiouAEIOU";
    printf("enter words or sentences:\n");
    for(i=0;i<5;i++)
        gets(str[i]);

    for(i=0;i<5;i++)
    {
        k=0;
        for(j=0;str[i][j];j++)
        {
            for(n=0;c[n];n++)
            {
                if(str[i][j]==c[n])
                k++;
            }
        }
        printf("In %s there are %d vowles\n",str[i],k);
    }

}
