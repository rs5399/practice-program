#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers:\n");
scanf("\n%d\n%d\n%d",&a,&b,&c);
if(a>b && b>c && a>c)
{
    printf("\nThe numbers in descending order are: \n%d  %d  %d",a,b,c);
}
if(b>a && b>c && c>a)
{
    printf("\nThe numbers in descending order are: \n%d  %d  %d",b,c,a);
}
if(c>a && c>b && b>a)
{
    printf("\nThe numbers in descending order are:\n%d  %d  %d",c,b,a);
}
return 0;
}
