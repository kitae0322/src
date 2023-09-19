#include <stdio.h>

int a;
int b;

void swap(int a, int b)
{
	int tmp =a;
	a = b;
	b = tmp;
}


int main(void)
{
	int a, b;
	a = 100;
	b = 200;
	
	printf("a: %d b: %d\n", a, b);
	
	swap(a, b);
	
	printf("a: %d b: %d\n", a, b);
	
	return 0;
}
