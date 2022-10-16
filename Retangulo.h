#include <stdio.h>
#include <stdlib.h>

Retangulo(FILE *arquivo){
    int i, j;
    
    system("color 5");
    
    for(i = 1; i <= 10; i++){
    	for(j = 1; j <= i; j++){
    		printf("\xDB");
    		fprintf(arquivo, "*");
    		
		}
    	printf("\n");
    	fprintf(arquivo, "\n");
	}
			fprintf(arquivo, "\n");
}
