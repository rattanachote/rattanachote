#include<stdio.h>
void sq(float x);
void  main()
{
    float x;
    printf("Input side : ");
    scanf("%f",&x);
    sq(x);
}
void sq(float x )
{
  printf("Area is : %.2f",x*x);
}
