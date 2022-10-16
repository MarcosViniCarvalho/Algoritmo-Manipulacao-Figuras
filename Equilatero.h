#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>



Equilatero(FILE *arquivo) {	
	
 	system("color 6");
 	
	int  a, m, e, d, altura_trian;
    int  base_trian;
    char graph;
    
    graph = '\xDB';
    altura_trian = 7;
    base_trian = 2*altura_trian - 1;
    
    int metade_trian = base_trian/2;
    
    for ( a = 0; a < altura_trian; a += 1){
            for (m = 0; m < metade_trian - a; m += 1){
            putchar(' ');
            fprintf(arquivo, " ");//Gravando no arquivo
			}

                       
            for ( e = 0; e <= a; e += 1) {
            	 putchar (graph);
            	 fprintf(arquivo, "*");///Gravando no arquivo
            	 
			}
                   
            
            
            for ( d = 1; d <= a; d += 1){
            	putchar (graph);
            	fprintf(arquivo, "*");//Gravando no arquivo
			}
                    
                
            putchar ('\n');
            fprintf(arquivo, "\n");//Gravando no arquivo
    }
    
    
	putchar ('\n');
    fprintf(arquivo, "\n");
}
