#include <stdio.h>
#include <conio.h>
int main()
{
int choice,a,c,m,n,x,z;
float b,d,y,t;
printf("\n\n#####***** W E L C O M E  T O  S U C K E R  D O N U T  S H O P *****#####\n\n");
printf("\n\nThere are two types of donuts to choose from.\n\n");
printf("\n\nPlease select your choice from the menu: \n\n");
printf("\n\n1. Original\n\n");
printf("\n\n2. Mix\n\n");
scanf("%d",&choice);
if(choice == 1)
{
printf("\n\nPlease select your choice from the menu: \n\n");
printf("\n\n1. Per dozen = 100 Bath\n\n");
printf("\n\n2. Each piece = 12 Bath\n\n");
scanf("%d",&n);
if(n == 1)
{
printf("Enter your required number: ");
scanf("%d",&x);
y = x*100;
printf("\n\n %d dozen donuts a price = %f", x,y);
}
if(n == 2)
{
printf("\n\nEnter your required number: ");
scanf("%d",&z);
t = z*12;
printf("\n\n %d piece donuts a price = %f", z,t);
}
}
if(choice == 2)
{
printf("\n\nPlease select your choice from the menu: \n\n");
printf("\n\n1. Per dozen = 200 Bath\n\n");
printf("\n\n2. Each piece = 20 Bath\n\n");
scanf("%d",&m);
if(m == 1){
printf("Enter your required number: ");
scanf("%d",&a);
b = a*200;
printf("\n\n %d dozen donuts a price = %f", a,b);
}
if(m == 2)
{
printf("\n\nEnter your required number: ");
scanf("%d",&c);
d = c*20;
printf("\n\n %d piece donuts a price = %f", c,d);
}
}
getch();
}
