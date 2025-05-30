#include <stdio.h>

int main(int argc, char** argv) {
	int cl = 0;
	FILE *fp = fopen(argv[1], "r");
	if (fp == NULL) {
		printf("Não foi possível abrir o arquivo");
		return -1;
	}
	int c;
	while ( (c =  fgetc(fp)) != EOF) {
		if (c == '\n') {
			cl++;
		}
			printf("%c" "%x\n", c == '\n'? '.':c, c);
	}

	fclose(fp);
	printf("\nLC=%d\n", cl);
	return 0;
}
