#include <stdio.h>

int main(void)
{
	char temp, ffn[100], sfn[100], ffstr[1000], sfstr[1000];
	int i=0, j=0, k=0, temp1, temp2;
	int counttotal=0, countsame=0;
	double percentage;
	FILE *ff, *sf;

	printf("Input first file name: ");
	scanf("%s", ffn);
	printf("Input second file name: ");
	scanf("%s", sfn);

	ff = fopen(ffn, "r");
	if ( ff == NULL ) {printf("read file error\n"); return 1;}
	sf = fopen(sfn, "r");
	if ( sf == NULL ) {printf("read file error\n"); return 1;}

	for(temp = getc(ff); temp != EOF; temp = getc(ff)){
		if ((temp != ' ') && (temp != '\n')){
			ffstr[i] = temp;
			i++;
		}
	}

	for(temp = getc(sf); temp != EOF; temp = getc(sf)){
		if ((temp != ' ') && (temp != '\n')){
			sfstr[j] = temp;
			j++;
		}
	}

	if (i>=j)
		i = j;

	while (k<i) {
		if (ffstr[k] == sfstr[k])
			countsame+=1;

		counttotal+=1;

		k++;
	}
		
	printf("Total character: %d\n", counttotal);
	printf("Same character: %d\n", countsame);

	percentage = ( (float)countsame / (float)counttotal ) * 100;

	printf("%.3f%% \n", percentage);

	fclose(ff);
	fclose(sf);

	return 0;
}
