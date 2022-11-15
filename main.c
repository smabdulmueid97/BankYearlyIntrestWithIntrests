#include<stdio.h>
#include<math.h>
int main()
{
    float p=1000;
    float r=0.05;
    float a=0;
    int n;

    printf("\nYear\tAmaount of money");
    for(n=1;n<=10;n++)
   {
        a=p*pow(1+r,n);
        printf("\n%d\t%.2f",n,a);
    }
}