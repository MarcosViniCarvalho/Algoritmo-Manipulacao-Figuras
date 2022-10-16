#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int linha, coluna;

Rectangulo (FILE *arquivo){
	system("color 4");

	for( linha = 0; linha < 8 ; linha++){
		for ( coluna = 0; coluna < 32; coluna++){
			printf("\xDB");
			fprintf(arquivo, "*");
		
		}
		printf("\xDB");
		printf("\xDB\n");
		
		fprintf(arquivo, "*");
		fprintf(arquivo, "*\n");
		
	}
		printf("\n\n\n");
		fprintf(arquivo, "\n\n");
		
}
