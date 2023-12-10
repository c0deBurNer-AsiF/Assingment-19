/*5. Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.*/

#include<stdio.h>
int main()
{
        int i,j;
        char str[3][30];
        printf("enter 3 mail:\n");

        for(i=0;i<3;i++)
        fgets(str[i],30,stdin);

        printf("odd emails are:\n");
        
        for(i=0;i<3;i++)
        {
           for(j=0;str[i][j];j++)
           {
                if(str[i][j]=='@')
                break;
               
           }
           if(str[i][j]!='@')
           printf("%s",str[i]);
           
        }
}
