//10. Create an authentication system. It should be menu driven.

#include<stdio.h>
int main()
{

    int i,j,m;
    
    char a[3][2][15]={{"@asif","bublesh"},{"nilu","chotovai"},{"amsif","dudu"}};

    char x[2][15];

    printf("enter ur user name:\n");
    for(i=0;i<1;i++)
        gets(x[i]);

    printf("enter your password:\n");
    for(i=1;i<2;i++)
        gets(x[i]);

    for(j=0;j<3;j++)
    {
         for(i=0;i<2;i++)
         {
             for(m=0;a[j][i][m] && x[i][m];m++)
             {
                 if(a[j][i][m]!=x[i][m])
                    break;
             }
             if(a[j][i][m]!=x[i][m])
                    break;
         }
         if(a[j][i][m]==x[i][m])
            break;
         else
         {


             for(i=0;i<2;i++)
             {
                 for(m=0;a[j][i][m] && x[i][m];m++)
                 {
                     if(a[j][i][m]!=x[i][m])
                        break;
                 }
                 if(a[j][i][m]!=x[i][m])
                        break;
             }
         }
         if(a[j][i][m]==x[i][m])
            break;
         else
         {

             for(i=0;i<2;i++)
             {
                 for(m=0;a[j][i][m] && x[i][m];m++)
                 {
                     if(a[j][i][m]!=x[i][m])
                        break;
                 }
                 if(a[j][i][m]!=x[i][m])
                        break;
             }
         }
    }

     if(i==2)
        printf("Successfully logged in");
     else
        printf("invalid username or password");

}
