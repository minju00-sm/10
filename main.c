#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char input[100];
	FILE* fp;
	int i;
	
	//fopen
	fp = fopen("sample.txt", "w");
	
	for (i=0; i<3; i++){
	
	//fprintf
	printf("input a word: ");
	scanf("%s", input);
	fprintf(fp, "%s\n", input);
	}
	//fclose
	fclose(fp);
	
	return 0;
}
