#include <stdio.h>

int palindrome(int, int);

int main(void)
{
	int number, digit=1;
	printf("Input 5 digit number : ");
	scanf("%d", &number);

	if (number<=0){
		printf("input number cant be negative\n");
		
	}
	else{
		if(palindrome(number, digit)){
			printf("It is a Palindrome number\n");
		}
		else{
			printf("It is not a Palindrome number\n");
		}
	}

	return 0;
}

int palindrome(int num, int digit)
{
	if (digit == 100)
		return 1;
	else{
		if (((num/(10000/digit))%10) == ((num%(digit*10))/digit))
			palindrome(num, (digit*10));
		else
			return 0;
	}
}
