#include <stdio.h>

long long qcd(int a, int b)
{
	int r;
	r = a % b;
	while (r != 0){
		a = b;
		b = r;
		r = a%b;
/*	while (r a%b){
		a = b;
		b = r;*/
	}
	return b;
}

int main(void)
{	
	int a, b;
	printf("input 2 nums :  ");
	scanf("%d %d", &a, &b);
	
	int result = qcd(a,b);
		printf("result : %d\n", result);
	
	return 0;
}
