#include <stdio.h>

double str2dbl(char*, int);

int main(void)
{
	char str[12];
	double result;
	
	scanf("%s", str);

	result = str2dbl(str,12);

	printf("%.6f\n", result);

	return 0;
}

double str2dbl(char inp[],int len)
{
	int i=0, j=0;
	int isMinus=0;
	double temp=0.0;

	if (inp[0]=='-'){
		i++;
		isMinus=1;
	}
	while(inp[i] && i<len){
		j*=10;
		if(inp[i]=='.'){
			j=1;
		}else{
			temp=temp*10+inp[i]-'0';
		}
		i++;
	}
	if(j)temp/=j;
	return isMinus?-temp:temp;
}
