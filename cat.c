#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char *argv[]) {
	FILE *arq;

	if(argc < 2) {
		exit(0);
	}

	char c;

	arq = fopen(argv[argc-1], "r");

	while(!feof(arq)) {
		fscanf(arq, "%c", &c);
		printf("%c", c);
	}

	fclose(arq);
	return 0;
}
