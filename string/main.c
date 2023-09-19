#include <stdio.h>
#include <string.h>

int main(void)
{
	//char buf[100];
	//char *name = buf;
	//char *name;
	/*char name[21];
	scanf("%20s", name);
	
	printf("%s", name);*/
	char str1[6] = "hello";
	char str2[10];
	
	printf("str1 len : %ld\n", strlen(str1));
	
	//str2= str1;
	strcpy(str2, str1);
	printf("%s\n", str2);
	if(strcmp(str1, str2) == 0){
		printf("str1 and str2 are equal\n");
		}else{
		printf("str1 and str2 are not equal\n");
	}
	char *title = "just the way you are";
	char *singer = "billy joel";
	char result[100];
	strcpy(result, title);
	strcat(result, " - ");
	strcat(result, singer);
	printf("result: %s\n", result);
	
	
	
	
	return 0;
}
