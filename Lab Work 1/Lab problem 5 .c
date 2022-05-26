/*The length & breadth of a rectangle and radius of a circle are input through the keyboard.
Write a program to calculate the area & perimeter of the rectangle, and the area & circumference
of the circle*/


#include<stdio.h>
int main(){

float length,breadth,radius,area1,area2,perimeter,circumference ;

printf("Enter the length of rectangle : ");
scanf("%f",&length);

printf("Enter the breadth of rectangle : ");
scanf("%f",&breadth);

printf("Enter the radius of circle : ");
scanf("%f",&radius);

area1=length*breadth;
perimeter=2*(length+breadth);
area2= 3.14159*radius*radius;
circumference=2*3.14159*radius;

printf(" The area & perimeter of the rectangle is %f , %f\n",area1 , perimeter);
printf("The area & circumference of the circle is %f , %f\n", area2,circumference );

}
