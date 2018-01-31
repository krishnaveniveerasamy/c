#include<stdio.h>
void main()
{
int num,digit;
printf("\nenter the number");
scanf("%d,&num);
do
{
digit=num%10;
num=num/10;
printf("%d",digit;
}while(num!=0);
getch();
}
