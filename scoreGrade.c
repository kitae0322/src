#include <stdio.h>

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	if(score >= 90){
		printf("score : %d -- grade: A\n",score);
	} else if(score >=80){
		printf("score : %d -- grade: B\n",score);
	}else if(score >= 70){
		printf("score : %d -- grade: C\n",score);
	}else if(score >= 60){
		printf("score : %d -- grade: D\n",score);
	}else if(score >= 50){
		printf("score : %d -- grade: F\n",score);
	}else{
	
	}
	
	return 0;
}
