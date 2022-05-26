/*If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.*/


#include<stdio.h>
int main()
{
	int number,sum,a,b,c,d,d1,d2,d3,d4;
	
	printf("Enter the 4 digit number:");
	scanf("%d",&number);
	
	a=number/10;
	d4=number%10;
	b=a/10;
	d3=a%10;
	c=b/10;
	d2=b%10;
	d=c/10;
	d1=c%10;
	
	sum=d1+d4;
	
	printf("Sum of last two digits is %d",sum);
	
	return 0;
	
	
}