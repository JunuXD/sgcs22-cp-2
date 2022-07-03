#include <stdio.h>

void f(int*, int*, int*, int);

int main(void)
{
	int dayp;
	int Y=2020, M=9, D=10;

	scanf("%d", &dayp);

	f(&Y, &M, &D, dayp);

	printf("%04d년%02d월%02d일\n",Y,M,D);

	return 0;
}

void f(int *Y, int *M, int *D, int X)
{
	int leap=0;
	
	if(*Y/4==0)leap=1;
	if(*Y/100==0)leap=0;
	if(*Y/400==0)leap=1;

	while(X){
		*D+=1;X-=1;
		switch(*M){
			case 1: if(*D==32){*D=1;*M+=1;}break;
			case 3: if(*D==32){*D=1;*M+=1;}break;
			case 5: if(*D==32){*D=1;*M+=1;}break;
			case 7: if(*D==32){*D=1;*M+=1;}break;
			case 8: if(*D==32){*D=1;*M+=1;}break;
			case 10: if(*D==32){*D=1;*M+=1;}break;
			case 12: if(*D==32){*D=1;*M+=1;}break;
			case 4: if(*D==31){*D=1;*M+=1;}break;
			case 6: if(*D==31){*D=1;*M+=1;}break;
			case 9: if(*D==31){*D=1;*M+=1;}break;
			case 11: if(*D==31){*D=1;*M+=1;}break;
			case 2: if(leap){
						if(*D==30){*D=1;*M+=1;}
					}
					else{
						if(*D==29){*D=1;*M+=1;}
					}
					break;
			default: break;
		}
		
		if(*M==13){*M=1;*Y+=1;}
	}
}
