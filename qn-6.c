// 6. Write a program to print the strings which are palindrome in the list of strings.


#include<stdio.h>
int main()
{
    int i,j,m,n,k;
    char str[3][15];
    printf("enter 3 words:\n");

    for(i=0;i<3;i++)
        gets(str[i]);

    printf("Palindromes are:\n");
    for(i=0;i<3;i++)
    {
        k=0;
        for(j=0;str[i][j];j++)
            k++;

        for(n=0,m=k-1;str[i][n] && m>=0;n++,m--)
        {

            if(str[i][n]!=str[i][m])
                break;
        }
        if(str[i][n]==str[i][m])
            printf("%s\n",str[i]);
    }
}
