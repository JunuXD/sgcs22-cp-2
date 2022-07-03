#include <stdio.h>

int main(void)
{
		int first;
		int second;

		printf("Input two integer:");
		scanf("%d %d", &first, &second);

		printf("%d / %d is %d with a remainder of %d\n", first, second, first/second, first%second);

	return 0;
}
