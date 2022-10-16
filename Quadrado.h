#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//#include "Moldura.h"

int linha, coluna;
Quadrado (FILE *arquivo){
	system("color 1");
//	Moldura();
	for( linha = 0; linha < 8 ; linha++){
		for ( coluna = 0; coluna < 16; coluna++){
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
