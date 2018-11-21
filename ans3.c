#include<stdio.h>
int main()
{
    int a=1,n,sum1,sum2;
    printf("Enter a number up to which you want to calculate:\n");
    scanf("%d",&n);
    while(a<=n)
    {
        if(a%2==0)
        {
            sum1=sum1+a;
        }
        else
        {
            sum2=sum2+a;
        }
        a++;
    }
    printf("The sum of even number is %d",sum1);
    printf("\nThe sum of odd number is %d",sum2);
    return 0;
}


