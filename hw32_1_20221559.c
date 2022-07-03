#include <stdio.h>

int main(void)
{
	int a, b, c;
	int *pa, *pb, *pc, *pmax, *pmin;

	scanf("%d %d %d", &a, &b, &c);

	pa = &a;pb = &b;pc = &c;

	pmax=pa; pmin=pa;

	if(*pmax<*pb)pmax=pb;
	if(*pmax<*pc)pmax=pc;
	if(*pmin>*pb)pmin=pb;
	if(*pmin>*pc)pmin=pc;
	
	printf("%d %d\n", *pmax, *pmin);

	printf("%p %p\n", pmax, pmin);

	return 0;
}
