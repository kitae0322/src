#include <stdio.h>



	int main(void){   
	int frameScores[11] = {0, };      //1~9frame   
	int scores[11][3] = {0, };   
	int bonus;
		for(int i = 1; i <= 10; ++i){      
			printf("%d frame first cast : ", i);      
			scanf("%d", &scores[i][1]);            //i-1 frame spare      
		if (i >= 2 && scores[i-1][1] + scores[i-1][2] == 10 && scores[i-1][1] != 10){      
      
			frameScores[i-1] = frameScores[i-2] + 10 + scores[i][1] ;   
	   		printf("=======================================================\n");      
			printf("%d frame score : %d\n", i-1, frameScores[i-1]);  
			printf("=======================================================\n");            //i-2 frame score      
		}else if (i >= 3 && scores[i-2][1] == 10 && scores[i-1][1] == 10){
            int bonus = scores[i-1][1] + scores[i][1];     
            frameScores[i-2] = frameScores[i-3] + 10 + bonus;      
            printf("=======================================================\n");      
            printf("%d frame score : %d\n", i-2, frameScores[i-2]); 
            printf("=======================================================\n");                  
            }            
            if(scores[i][1] != 10 || i == 10){         
				printf("%d frame second cast : ", i);        
				scanf("%d", &scores[i][2]);
				                 
            if(i >= 2 && scores[i-1][1] == 10) {         
              frameScores[i-1] = scores[i][2] + frameScores[i-2] + scores[i][1] +10;         
              printf("%d frame score : %d\n", i-1, frameScores[i-1]);         
              }         
              if(scores[i][1] + scores[i][2] < 10) { 
                 frameScores[i] = frameScores[i-1] + scores[i][1] + scores[i][2];             
                 printf("%d frame score : %d\n", i ,frameScores[i]);        
                 }     
             }  
             if(i == 10 && scores[i][1] +  scores[i][2] >= 10 ){
					printf("%d frame third cast : ", i);
					scanf("%d", &bonus);
             	frameScores[10] = frameScores[9] + scores[i][1] + scores[i][2] + bonus;
             	printf("%d frame score : %d\n", 10, frameScores[10]);   
             }
                              }          
		
       return 0;
 }
                     
                     
                   
