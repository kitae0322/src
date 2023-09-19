#include <stdio.h>

int main(void)
{
	double celsius;
	//int celsius;
	//celsius = 36;
	scanf("%lf", &celsius);
	
	double fahr;
	fahr = (celsius * 9.0/5.0) + 32;
	
	printf("celsius:%f ----> fahr:%.2f\n",celsius,fahr);
	//printf("celsius:%d ----> fahr:%.2f\n",celsius,fahr);
	
	return 0;
	}
