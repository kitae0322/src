#include <stdio.h>

int main(void)
{

	int kor,eng,mat;
	printf("input kor eng mat :  ");
	scanf("%d %d %d", &kor,&mat,&eng);
	int sum = kor + eng + mat;
	
	//double average = sum/3.0;
	double average = (double)sum / 3.0;
	printf("sum:%d\t average: %.2f\n",sum,average);
	return 0;
	}
