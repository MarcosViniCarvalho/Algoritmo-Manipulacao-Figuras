#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "Equilatero.h"
#include "Rectangulo.h"
#include "Quadrado.h"
#include "Losango.h"
#include "Retangulo.h"
#include "Paralelogramo.h"
#include "GeradorArquivo.h"

int opcMenu;
char caminho[80];

FILE *arquivo; //Arquivo que será usado ao longo do programa

//Aqui acontece a chamada de todas as bibliotecas. cada uma impreme uma figura....

void ExibirMenu (){
	
	opcMenu = 0;
	
	printf("|==========================================| \n");
	printf("|     Gerador de figuras geometricas       | \n");
	printf("|------------------------------------------| \n");
	printf("|   1- Equilatero    |   2 - Rectangulo    | \n");
	printf("|------------------------------------------| \n");
	printf("|   3- Quadrado      |   4 -  Losango      | \n");
	printf("|------------------------------------------| \n");
	printf("|   5 - Retangulo    |   6 - Paralelogramo | \n");
	printf("|------------------------------------------| \n");
	printf("| Escolha de 1 a 6 para imprimir uma figura| \n");
	printf("|          Ou aperte 0 para SAIR           | \n");
	printf("|==========================================| \n");
	
	
	scanf("%d", &opcMenu);
	
	if(opcMenu >= 1 && opcMenu <= 6){
		ExibirFigura ();
	}else {
		//Ao finalizar o programa, considerações finais
		system("cls");
		fclose(arquivo);//fechar o arquivo manipulado ao longo da aplicação
		printf("Arquivo: %s salvo com sucesso!!! \n\n ", caminho);//informara o nome do arquivo salvo
		printf("\nNao tenha um bom dia, tenha um OTIMO dia!!");
		
		int tchau;
		printf("\n\n\n\nDigite qualquer tecla para sair");
		scanf(" %d", &tchau);
	}
		


	
}

//essa função foi implementada com um switch para simular um menu
//cada Case chama uma função referente a uma figura e rechama a função menu
//Cada função de figura tem um parametro( O arquivo em si)

void ExibirFigura (){
	
	system("cls");
	switch(opcMenu){
		case 1 :{
			Equilatero(arquivo);//(Ponteiro arquivo)
		
			ExibirMenu();
			break;
		}
		case 2 :{
			Rectangulo(arquivo);
			
			ExibirMenu();
			break;
		}
				
		case 3 :{
			Quadrado(arquivo);
			
			ExibirMenu();
			break;
		}
		case 4 :{
			Losango(arquivo);
			
			ExibirMenu();
			break;
		}
		case 5 :{
			Retangulo(arquivo);
			
			ExibirMenu();
			break;
		}
		case 6 :{
			Paralelogramo(arquivo);
			
			ExibirMenu();
			break;
		}
	}

}

//A função escolhendo arquivo, faz a geração do arquivo e deixa ele disponivel para manipulação
//Essa função so é chamada quando o programa inicia..
EscolhendoArquivo (){
 	printf("Primeiro, digite o nome do arquivo.txt\nOBS: o arquivo sera salvo na mesma pasta da aplicacao. \n");
 	scanf("%s", &caminho);

	arquivo = fopen (caminho , "w");//abrindo o arquivo
	
	ExibirMenu();//A função exibir menu vai ficar sendo rechamada ao longo da aplicação
}


