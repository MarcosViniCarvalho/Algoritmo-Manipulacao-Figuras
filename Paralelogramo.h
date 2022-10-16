#include <stdio.h>
#include <stdlib.h>


Paralelogramo(FILE *arquivo)
{

	   
    int i, j, linha , coluna;
    system("color 3");
    linha = 8;
    coluna = 15;
    
    for (i = 1; i <= linha; i++) {

        for (j = 1; j < i; j++) {
            printf(" ");
            fprintf(arquivo, " ");
        }
        for (j = 1; j <= coluna; j++) {
 
            if (i == 1 || i == linha
                || j == 1 || j == coluna) {
                printf("\xDB");
                fprintf(arquivo, "*");
                
            }
            else {
                printf("\xDB");
                fprintf(arquivo, "*");
            }
        }
 
        printf("\n");
        fprintf(arquivo, "\n");
        
    }
    
    fprintf(arquivo, "\n");
}
