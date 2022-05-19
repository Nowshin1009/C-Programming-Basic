#include<stdio.h>
int main()
{

	int sub1,sub2,sub3,sub4,sub5,aggregate;
	float percentage;
	printf("Enter the number of subject 1: ");
	scanf("%d",&sub1);
	printf("Enter the number of subject 2: ");
	scanf("%d",&sub2);
	printf("Enter the number of subject 3: ");
	scanf("%d",&sub3);
	printf("Enter the number of subject 4: ");
	scanf("%d",&sub4);
	printf("Enter the number of subject 5: ");
	scanf("%d",&sub5);

	aggregate=sub1+sub2+sub3+sub4+sub5;
	percentage=aggregate*(100.00/500.00);

	printf("Aggregate mark obtained by student=%d\n",aggregate);
	printf("Percentage of student=%.2f",percentage);


	return 0;

}
