/*Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to
convert this temperature into Centigrade degrees*/

#include<stdio.h>
int main()
{
	float f,c;

	printf("Enter temperature of city in fahrenheit:");
	scanf("%f",&f);
	c=(5.0/9.0)*(f-32);
	printf("Temperature:%f ",c);

	return 0;
}
