#include<stdio.h>
void main()
{
    float a[3],b;
    int i;
    char e[20]="Caculas",f[20]="Physics",g[20]="Com";
    for(i=0;i<=2;i++)
        {
            if(i==0)
            {
            printf("Input %s Score: ",e);
            scanf("%f",&a[i]);
            if(a[i]>=80&&a[i]<=100)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is A");
            }
              if(a[i]>=71&&a[i]<80)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is B");
            }
              if(a[i]>=61&&a[i]<=70)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is C");
            }
              if(a[i]>=51&&a[i]<=60)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is D");
            }
              if(a[i]<50)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is F");
            }
            }
               if(i==1)
            {
            printf("\nInput %s Score: ",f);
            scanf("%f",&a[i]);
            if(a[i]>=80&&a[i]<=100)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is A");
            }
              if(a[i]>=71&&a[i]<80)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is B");
            }
              if(a[i]>=61&&a[i]<=70)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is C");
            }
              if(a[i]>=51&&a[i]<=60)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is D");
            }
              if(a[i]<50)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is F");
            }
            }
               if(i==2)
            {
            printf("\nInput %s Score: ",g);
            scanf("%f",&a[i]);
            if(a[i]>=80&&a[i]<=100)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is A");
            }
              if(a[i]>=71&&a[i]<80)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is B");
            }
              if(a[i]>=61&&a[i]<=70)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is C");
            }
              if(a[i]>=51&&a[i]<=60)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is D");
            }
              if(a[i]<50)
            {
                printf("Mark is %.2f \n",a[i]);
                printf("Grade is F");
            }
            }
        }
        b=(a[0]+a[1]+a[2])/3;
        if(b>=80&&b<=100)
            {
                printf("\nAvg score is %.2f and Grade is A",b);
            }
              if(a[i]>=71&&a[i]<80)
            {
                printf("\nAvg score is %.2f and Grade is B",b);
            }
              if(a[i]>=61&&a[i]<=70)
            {
                printf("\nAvg score is %.2f and Grade is C",b);
            }
              if(a[i]>=51&&a[i]<=60)
            {
                printf("\nAvg score is %.2f and Grade is D",b);
            }
              if(a[i]<50)
            {
                printf("\nAvg score is %.2f and Grade is F",b);
            }

    }
