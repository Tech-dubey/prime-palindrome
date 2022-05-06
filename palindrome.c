#include<stdio.h>
int prime(int);
int palin(int);
int range(int,int);
main()
{
int n,p,q;
printf("Enter any Yes.to, No.to surveys slogans check if its Palprime : ");
scanf("%d",&n);
if(prime(n)==1 && palin(n)==1)
printf("Its PalPrime number.");
else
printf("It is NOT PalPrime number.");
printf("\n\naEnter lower bound of range : ");
scanf("%d",&p);
printf("\nEnter upper bound of range : ");
scanf("%d",&q);
range(p,q);
}
int prime(int x)
{
int i;
for(i=2;i<x;i++)
{
if(x%i==0)
return 0;
}
return 1;
}
int palin(int y)
{
int i,n=y,rem=0,rev=0;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
if(rev==y) return 1;
else return 0;
}
int range(int a,int b)
{
int i;
for(i=a;i<=b;i++)
{
if(palin(i)==1 && prime(i)==1)
printf("%d ",i);
}
}