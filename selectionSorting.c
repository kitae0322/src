#include <stdio.h>

int main(void)
{	
	int nums[10] = {50,30,100,10,20,60,40,70,90,80};//initializedlist
	//sorting
	for(int i = 0; i < 10-1; ++i){
		for(int j = i + 1; j < 10; ++j){
			if(nums[i] > nums[j]){
				int tmp = nums[j];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
		}
	}
	
	for(int i = 0; i< 10; ++i){
		printf("%d  ", nums[i]);
	}
	printf("\n");
	return 0;
	}
