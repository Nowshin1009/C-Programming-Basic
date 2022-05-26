/*. A five-digit number is entered through the keyboard. Write a program to obtain the reversed 
number and to determine whether the original and reversed numbers are equal or not.*/

#include <stdio.h>

int main()

{

    int Num, rev_Num = 0, remainder;

    printf("Enter the number to reverse: ");

    scanf("%d", &Num);

    while (Num != 0){

        remainder = Num % 10;

        rev_Num = rev_Num * 10 + remainder;

        Num = Num/10;

    }

    printf("The reversed number is: %d\n", rev_Num);
    if(rev_Num==Num){

    	printf("Numbers are equal");


	}
	else{

			printf("Numbers are not equal");


	}

    return 0;

}