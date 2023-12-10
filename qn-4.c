//4. Write a program to search a string in the list of strings.

#include<stdio.h>
int main()
{
    int i,m,n;
    char str[5][20],x[20];

    printf("enter 5 strings:\n");
    for(i=0;i<5;i++)
        fgets(str[i],20,stdin);

    printf("enter a string:\n");
    fgets(x,20,stdin);

   for(i=0;i<5;i++)
   {
       for(n=0,m=0;str[i][n]&&x[m];n++,m++)
       {
           if(str[i][n]!=x[m])
            break;
       }
       if(str[i][n]==x[m])
       break;
   }
   if(str[i][n]==x[m])
    printf("This string in the list of the strings");
   else
    printf("This string not in the list of the strings");

}
