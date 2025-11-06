#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char input[100];
	FILE *fp;
	char c;
	
	fp = fopen("sample.txt", "r");
	
	if (fp == NULL){
		printf("파일을 못열음\n");
		return -1;
	}
	
	#if 0	
	while ( (c = fgetc(fp) ) != EOF){
		putchar(c);
	}
	#else
	while ( fgets (input, 100, fp) > 0) {
		printf("%s", input);
	}
	#endif
	
	fclose(fp);
	
	return 0;
}
