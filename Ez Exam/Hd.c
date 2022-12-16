#include<stdio.h>
#include<conio.h>
int main()
{
int num [5];
int i,j,max=0,min;
float m=0,Avg;
for(i=0;i<5;i++)
{
printf("Enter number: ");
scanf("%d",&num[i]);
m=m+num[i];
}
min=num[0];
for(j=0;j<5;j++)
{
if(min>num[j])
min=num[j];
if(max<num[j])
    max=num[j];
}
Avg=m/5;
printf("Max: %d",max);
printf("\nMin: %d",min);
printf("\nMean: %.2f",Avg);
getch(); return 0;
}
