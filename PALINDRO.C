#include<conio.h>
#include<stdio.h>
void main()
{
int n=258;

int a;
int s=0;
int n1=n;
clrscr();
while(n!=0)
{
a=n%10;
s=s*10+a;
n=n/10;
}
if(n1==s)
{
printf("no is palindrome\n");
}
else
{
printf("no is not palindrome");
}
getch();
}



