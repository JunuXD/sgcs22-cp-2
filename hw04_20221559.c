/* hw04 20221559 22/03/18 */

#include <stdio.h>

int main(void)
{
	int price, price_six;

	printf("Price :");
	scanf("%d", &price);

	price_six = (int)((float)price * 1.05 * 1.05 * 1.05);

	printf("-------------output-------------\n");

	printf("Month\t\t:%10d%10d\n", 3, 6);
	printf("Payment\t\t:%10d%10d\n", price, price_six);
	printf("--------------------------------\n");
	printf("Pay/Month\t:%10.2f%10.2f\n", (float)price/3.0, (float)price_six / 6.0);

	return 0;
}
