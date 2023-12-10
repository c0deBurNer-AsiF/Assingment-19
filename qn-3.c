//3. Write a program to read and display a 2D array of strings in C language.

#include<stdio.h>
int main()
{
    int i;
    char str[5][20];
    printf("enter words or sentences:\n");
    for(i=0;i<5;i++)
        fgets(str[i],20,stdin);

    for(i=0;i<5;i++)
        printf("%s\n",str[i]);
}
