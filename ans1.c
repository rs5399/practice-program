#include<stdio.h>
int main()
{
    printf("*|\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
    printf("----------------------------------------------------------------------------------\n");
    int a,b;
    for(a=1;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        {
            if(b==0)
            {
                printf("%d",a);
             }
             else
             {
                    printf("%d",(a*b));
              }
              printf("\t");
        }
              printf("\n");
          }
          return 0;
    }



