#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{	

	int lotto[7];
	srand(time(NULL));
	
	lotto[0]= rand()%45+1;
	for(int i = 1 ; i <7 ; ++i){
			lotto[i] =rand()%45+1;
			for(int j= 0; j<i; ++j){
				while(lotto[i] == lotto[j]){
					lotto[i]=rand()%45+1;	
				}	
			}
		
		}
		
		printf("lotto lottober:%d %d %d %d %d %d\n", lotto[0],lotto[1],lotto[2],lotto[3],lotto[4],lotto[5]);
		printf("bonus lottober: %d\n",lotto[6]);


	return 0;
}
