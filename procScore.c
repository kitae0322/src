#include <stdio.h>

int main(void)
{	
	int scores[5];
	//int score1, score2, score3, score4, score5;	
	/*scanf("%d", &score1);
	scanf("%d", &score2);
	scanf("%d", &score3);
	scanf("%d", &score4);
	scanf("%d", &score5);*/
	//scanf("%d", &score[0]);
	for(int i = 0; i<5; ++i){
		scanf("%d", &scores[i]);
		} 
//	int sum = score1 +score2+ score3+ score4+score5;
	int sum = 0;
	for(int i=0; i<5; ++i){
		sum = sum + scores[i];
		}	
	double average = (double)sum /5.0;
	
	printf("sum: %d\taverage: %.2f\n",sum,average);
	
	return 0;
}
