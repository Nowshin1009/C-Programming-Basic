 /*1.If cost price and selling price of an item is input through the keyboard, write aprogram to 
determine whether the seller has made profit or incurred loss. Also determine how much profit 
he made or loss he incurred*/
 
 
 #include<stdio.h>
int main()
{
	double cost_price,selling_price,profit,loss;

	printf("Enter the cost price of an item:");
	scanf("%lf",&cost_price);
	printf("Enter the selling price of an item:");
	scanf("%lf",&selling_price);

	if(cost_price>selling_price)
	{
		loss=cost_price-selling_price;
		printf("Loss:%.2lf",loss);

	}
	else
	{

		profit=selling_price-cost_price;
		printf("Profit:%.2lf",profit);

	}

	return 0;

}