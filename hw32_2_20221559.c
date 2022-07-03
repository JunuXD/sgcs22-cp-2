#include <stdio.h>

void* f(void*, void*, int);

int main(void)
{	
	int option, a, b;
	float fa, fb;
	double da, db;
	void *pa, *pb, *ans;
		
	scanf("%d", &option);

	switch(option){
			case 0: scanf("%d %d", &a, &b); pa=&a;pb=&b;break;
			case 1: scanf("%f %f", &fa, &fb); pa=&fa;pb=&fb;break;
			case 2: scanf("%lf %lf", &da, &db); pa=&da;pb=&db;break;
	}
	
	ans=f(pa,pb,option);

	switch(option){
			case 0: printf("%d\n", *(int*)ans);break;
			case 1: printf("%f\n", *(float*)ans);break;
			case 2: printf("%f\n", *(double*)ans);break;
	}

	return 0;
}

void* f(void *pa, void *pb, int option)
{
	switch(option){
			case 0: return((*(int*)pa<*(int*)pb)?pa:pb);	
			case 1: return((*(float*)pa<*(float*)pb)?pa:pb);	
			case 2: return((*(double*)pa<*(double*)pb)?pa:pb);	
	}
}
