#include<stdio.h>
int main()
{
int n,a,b,i,c;
printf("Enter number to be checked: ");
scanf("%d",&n);
a=0;
b=1;

if(n==0)
    printf("Fibonnaci number");
c = a + b;
while(c<n)
{
    a = b;
    b = c;
    c = a + b;
}
if(c==n)
    printf("fibonacci number");
else
    printf("not a fibonacci number");
}
