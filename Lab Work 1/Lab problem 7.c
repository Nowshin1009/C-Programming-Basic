 /*If a five-digit number is input through the keyboard, write a program to calculate the sum of
its digits.*/

#include<stdio.h>
int main (){
 int a,b,c,d,e,d1,d2,d3,d4,d5,number,sum;
printf("Enter 5 digit number : ");
scanf("%d",&number);

	a=number/10;
	d5=number%10;
	b=a/10;
	d4=a%10;
	c=b/10;
	d3=b%10;
	d=c/10;
	d2=c%10;
	e=d/10;
	d1=d%10;
	sum=d1+d2+d3+d4+d5;


	printf("Sum of the digits :%d",sum);


	return 0;


}






