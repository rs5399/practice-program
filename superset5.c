#include<stdio.h>
#define PI 3.1415
int main()
{
    float radius,area;
    char ch;
    do
    {


    printf("Radius = ?\n");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("Area=%.4f\n",area);
    printf("Do you want to repeat this calculation?(y/n)\n");
    scanf(" %c",&ch);
    }while(ch=='y');
    if(ch=='n')
    {
        printf("Goodbye");
    }
    return 0;
}
