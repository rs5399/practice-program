#include<stdio.h>
#include<math.h>
int main()
{
    int x=-10;
    double y;
    while(x<=10)
    {
        if(x%2==0)
        {
            y=(pow(x,2)+1.5*x+5)/(x-3);
            printf("\nFor x = %d\tf(x)=%lf",x,y);
        }
        x++;
    }
    return 0;
}


