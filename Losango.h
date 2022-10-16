#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

Losango(FILE *arquivo)
{

    int i, tam, espaco, asterisco, x, y, metade;

        asterisco=1;
        espaco=tam=10;
        metade=tam/2;
	system("color 2");
  

    for (x=0; x<metade; x++){ 

        for (i=1; i<=espaco; i++) {
        	printf(" ");
        	fprintf(arquivo, " ");
        	
		}
		
        espaco--;

        for (y=0;y<asterisco;y++){
        	printf("\xDB");
        	fprintf(arquivo, "*");
             
		}
		
             

                printf("\n");
				fprintf(arquivo, "\n"); 
                asterisco+=2; 
}
    
        asterisco-=2;
        espaco++;

   

    for (x=0; x<metade; x++){

        asterisco-=2; 
        espaco++; 

        for (i=0; i<espaco;i++){
        	printf(" ");
        	fprintf(arquivo, " ");
		}

        for (y=0; y<asterisco;y++){
      	    printf("\xDB");
      	    fprintf(arquivo, "*");
       	}
       	
        printf("\n");
        fprintf(arquivo, "\n");
    }
    
}
