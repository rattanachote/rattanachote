#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{
  char choice;
  int e,i,j,f=0,ch[2][170],a,c,b=0,d;

  for(j=0;j<=169;j++)
  {
    ch[0][j]=0;
    ch[1][j]=0;
  }
  do
  {

    printf("\n\n\n\nEnter the no.between 0-101 whose factorial to be found ");
    scanf("%d",&a);
    if(a<1||a>100)
    {
      printf("\nFactorial cannot be calculated");
      getch();
      exit(0);
    }
    c=a-1,d=c;
    for(j=160;j>0;j--)
    {
 ch[0][j]=a%10;
 ch[1][j]=a%10;
 a=a/10;
    }
    while(d!=0)
    {
      e=c/10,b=c%10;
      for(j=0;j<=160;j++)
      {
   ch[0][j]=ch[0][j]*b;
   ch[1][j]=ch[1][j+1]*e;
      }
      for(i=0;i<2;i++)
      {
 for(j=160;j>0;j--)
 {
   f=ch[i][j]/10;
   ch[i][j]=ch[i][j]%10;
   ch[i][j-1]+=f;
 }
      }
      for(j=160;j>0;j--)
      ch[0][j]+=ch[1][j];
      for(j=160;j>0;j--)
      {
 f=ch[0][j]/10;
 ch[0][j]=ch[0][j]%10;
 ch[0][j-1]+=f;
      }
      for(j=0;j<=160;j++)
      ch[1][j]=ch[0][j];
      d=d-1,c=d;
    }
    d=0;
    for(j=0;j<=160;j++)
    {
      if(ch[0][j]!=0)
      break;
      else
      d++;
    }
    for(j=d;j<=160;j++)
    printf("%d",ch[0][j]);
    printf("\nWant to enter more number whose factorial to be calculated(Y/N)");
    choice=getch();
  }while(choice=='y'||choice=='Y');
}
