#include <stdio.h>

#define N 60

void sort(int *nu,int i,int k);

int main()

{

    int  a,i,x,b,min,max,num[N];

    double  avr,total;

    total=0;

               printf(" Input number to sort\n");

               for(i=0;i<N;i++)

    {

             scanf("%d",&a);

             if(a==-1)

                 break;

             else{

               num[i] = a;

               total+=a;

             }

    }

      b= (i-1); avr =total/i;

    printf(" avr = %8.2f",avr);

    printf("\n");

             for(i=0;i<=b;i++)

             printf("\n %d",num[i]);

    x=0;

             while (x<i)

           {

              sort(num,i,x);

               x++;

           }



    printf("\n\n This is sort\n");

             for(i=0;i<=b;i++)

             printf("\n %d",num[i]);

    min =*num;

    max=*(num+(i-1));

    printf("\n\n Minimum number is = %d",min);

    printf("\n\n Maximum number is = %d",max);

    printf("\n\n");

}

    void sort(int *nu,int i,int k)

    {

        int  temp,j;

               j=0;

              while(j<(i-1-k))

                  {

                     if(*nu>*(nu+1))

                      {

                        temp = *nu;

                        *nu = *(nu+1);

                        *(nu+1) = temp;



                      }

                         nu++;   j++;

                  }

     }

