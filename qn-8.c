/*8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
 word1 = “the”, word2 = “fox”, OUTPUT : 1 )*/


 #include<stdio.h>
 int main()
 {
     int i,m,n,j,k;
     char str[5][15]={"the","quick","brown","fox","quick"};
     char x[2][15];

     for(i=0;i<5;i++)
        printf("%s\n",str[i]);

     printf("chose any two words:\n");
     for(i=0;i<2;i++)
     gets(x[i]);

     for(j=0;j<1;j++)
     {
         for(i=0;i<5;i++)
         {
             for(m=0;x[j][m]&&str[i][m];m++)
             {
                 if(x[j][m]!=str[i][m])
                    break;
             }
             if(x[j][m]==str[i][m])
                break;
         }
         n=i;

     }

     for(j=1;j<2;j++)
     {
         for(i=0;i<5;i++)
         {
             for(m=0;x[j][m]&&str[i][m];m++)
             {
                 if(x[j][m]!=str[i][m])
                    break;
             }
             if(x[j][m]==str[i][m])
                break;
         }
         k=i;

     }


     if(n>k)
        i=((n+1)-(k+1)-1);
     else if(k>n)
        i=((k+1)-(n+1)-1);
     else
        i=(n+1)-(k+1);

     printf("The minimum distance between two words is: %d",i);


 }
