#include<stdio.h>
#include<string.h>
#include<math.h>
#define PI 3.1415926535
//functional
float square(float a);
float rectangle(float b,float c);
float parallelogram(float d, float e, float h);
float triangle(float f, float g);
float circle(float r);
int fibbonacci(int n);
int fac(int n);
int dectooct(int num);
float dif(float a[], int deg, float x);
void main(){
    int choice,ch1,ch2;
    printf("\n\tMAIN MENU\n");
    printf("==========================\n");
    printf("1. Calculation\n2. EXIT\n");
    printf("==========================\n");
    printf("SELECTION CHOICES: ");
    scanf("%d", &choice);
    if(choice==1){
            printf("\n");
            printf("==========================\n");
            printf("1.geometry\n2.calculator\n3.S.D. \n4.Fibonacci\n5.working with matrix\n6.Factorial\n7.Decimal to octal\n8.Integration\n9.Differential\n10.RETURN TO MAIN\n");
            printf("==========================\n");
            printf("SELECTION CHOICE: "); scanf("%d",&ch1);
            if(ch1==1){
    while(ch2 != 6){
    printf("\n\tGEOMETRY FUNCTION\n");
    printf("==========================\n");
    printf("1. Square\n2. Rectangle\n3. Parallelogram\n4. Triangle\n5. Circle\n6. EXIT\n");
    printf("============SELECTIOM CHOICES: ");
    scanf("%d", &ch2);
    if(ch2 == 1){
        float a;
        printf("Input length: ");
        scanf("%f", &a);
        float area = square(a);
        printf("The Area of SQURE that has length %.2f is %.2f\n", a,area);
    }else if(ch2 == 2){
        float b,c;
        printf("Input length and width: ");
        scanf("%f %f", &b, &c);
        printf("The Area of RECTANGLE that has length %.2f width %.2f is %.2f", b,c,rectangle(b,c));
    }else if(ch2 == 3){
        float d,e,h;
        printf("Input length, width and height: ");
        scanf("%f %f %f", &d,&e,&h);
        printf("The Area of PARALLELOGRAM that has length1: %.2f, length2: %.2f and Height :%.2f is %.2f",d,e,h,parallelogram(d,e,h) );
    }else if(ch2 == 4){
        float f,g;
        printf("Input base and height: ");
        scanf("%f %f", &f, &g);
        printf("The Area of TRIANGLE that has base %.2f height %.2f is %.2f", f,g,triangle(f,g));
    }else if(ch2 == 5){
         float r;
        printf("Input radius: ");
        scanf("%f", &r);
        printf("The Area of CIRCLE that has radian %.2f is %.2f", r,circle(r));
    }else if(ch2 == 6){
        break;
    }else printf("INCORRECT CHOICE");
    }
    //============================================================================================
        }else if(ch1==2){
            int num1,num2,ans=0;
    char Op;
    printf("Enter the Number: ");
    scanf("%d", &num1);
    printf("Operation: ");
    scanf(" %c", &Op);
    printf("Enter the Number: ");
    scanf("%d", &num2);
    switch(Op)
    {
        case '+':ans=num1+num2;break;
        case '-':ans=num1-num2;break;
        case '*':ans=num1*num2;break;
        case '/':ans=num1/num2;break;
        case '%':ans=(int)num1 % (int)num2;break;
        default:printf("Invalid operation.\n");
    }
    printf("Your ANSWER: %d %c %d = %d\n",num1,Op,num2,ans);
    //===============================================================================================
        }else if(ch1==3){
            int score[100],i,sum=0,avg,sd,n;
             int x,a,total=0;
    for(i=1;i<=n;i++){
        printf("Input your score: ");
        scanf("%d", &score[i]);
    }
    for(i=1;i<=n;i++){
        sum+=score[i];
    }
    avg = sum/n;
    for(i=1;i<=n;i++){
        x=pow(score[i]-avg,2);
        total+=x;
    }
    a = total/(n-1);
    float b = sqrt(a);
    printf("S.D. of this sample = %.2f",b);
}
//============================================================================================
else if(ch1==4){
    int n;
   int i;
   printf("Input: ");
   scanf("%d", &n);
   printf("Fibbonacci of %d: " , n);
   for(i = 0;i<n;i++) {
      printf("%d ",fibbonacci(i));
   }
}
//==============================================================================================
else if(ch1==5){
     int mat1[3][3], mat2[3][3];
     int c,i,j,sum=0;

     for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             printf("Let's Create Matrix1 3x3: ");
             scanf("%d", &mat1[i][j]);
         }
     }
     printf("====================\n");
     for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             printf("Let's Create Matrix2 3x3: ");
             scanf("%d", &mat2[i][j]);
         }
     }
     printf("Would you like to sum up [1] or substract [2]: ");
     scanf("%d", &c);
     if(c==1){
     for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             sum=mat1[i][j]+mat2[i][j];
            printf("%d\t", sum);
         }
         printf("\n");
     }
     }else if(c==2){
        for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             sum=mat1[i][j]-mat2[i][j];
            printf("%d\t", sum);
         }
         printf("\n");
     }
     }else printf("INVALID CHOICE");
}
//===========================================================================================
else if(ch1==6){
    int q;
    printf("Enter number: "); scanf("%d",&q);
    printf("%d! = %d",q,fac(q));

}
//=========================================================================================
else if(ch1==7){
    int qq;
    printf("Enter Decimal number: "); scanf("%d", &qq);
    printf("%d", dectooct(qq));
}
//===========================================================================================
else if(ch1==8){
    int n,c=0,deg[100],k,co[100],re[100],temp,e;
    char op[100];
    printf("Maximal Degree: ");
    scanf("%d",&n);
    k=n;
    for(int i=0;i<=n;i++){
        printf("Enter coefficient of degree %d: ",k);
        scanf("%d",&co[i]);
        if(i<n){
        printf("Enter Operation: ");
        scanf(" %c",&op[i]);
        }
        k--;
    }
    e=n;
    for(int i=0;i<=n;i++){
        temp=e;
        deg[i]=temp;
        e--;
    }
    printf("\n========================\n");
    printf("\nResult: ");
    for(int i=0;i<=n;i++){
        re[i]=deg[i]+1;
    }
    for(int i=0;i<=n;i++){
        if(deg[i]!= 0){
        printf(" (%dX^%d)/%d ",co[i],re[i],re[i]);
        printf("%c",op[i]);
        }else printf(" %dX + C",co[n]);
    }
    printf("\n");
    printf("\n========================\n");
}
//=================================================================
else if(ch1==9){
     float x, a[10], y1;
    int deg, i;
    printf("Enter the degree of polynomial equation: ");
    scanf("%d", &deg);
    printf("Ehter the value of x for which the equation is to be evaluated: ");
    scanf("%f", &x);
    for (i = 0; i <= deg; i++) {
        printf("Enter the coefficient of x to the power %d: ", i);
        scanf("%f", &a[i]);
    }
    y1 = dif(a, deg, x);
    printf("The value of polynomial equation for the value of x = %.2f is: %.2f", x, y1);
}
    }else printf("Thanks foe using my program, Hope to see you later JubJub ~ ");
}


//functional
float square(float a){
        return a*a;
}

float rectangle(float b,float c){
    return b*c;
}

float parallelogram(float d, float e, float h){
    return 1/2 * (d+e) * h;
}

float triangle(float f, float g){
    return 1/2*f*g;
}

float circle(float r){
    return PI*r*r;
}

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int fac(int n){
    if(n==1 || n==0){
        return 1;
    }else
    return fac(n-1)*fac(n-2);
}

int dectooct(int num){
    int oct[100];
    int i=0, j;
    do{
        oct[i] = num % 8;
        num/= 8;
        i++;
    }while(num > 0);

    printf("Octal value: ");
    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", oct[j]);
    }
    return oct;
}

float dif(float a[], int deg, float x)
{
    float p;
    int i;
    p = a[deg];
    for (i = deg; i >= 1; i--) {
        p = (a[i - 1] + x * p);
    }
    return p;
}






