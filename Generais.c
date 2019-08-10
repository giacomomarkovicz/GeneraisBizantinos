#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct // Cria uma STRUCT para armazenar os dados do general
{ 
    
    int Id;        // id do general
    int Traidor;   // recebe um numero random entre 0 e 10
    
} General; // Define o nome do novo tipo criado

int main(int argc, char **argv)
{
	General Generais[20]; // vetor com 20 generais, valor pode ser mudado se preferir 
	int traidores = 0;
	
	srand(time(NULL));
	
	int n_generais = sizeof(Generais)/sizeof(Generais[0]); //pega length do vetor Generais
	
	for(int i = 0; i <= n_generais; i++){
		Generais[i].Id = i; 				// atribui valor ao id de general
		Generais[i].Traidor = rand() % 10;	// atribui um valor aleatorio para traidor	
		
		printf("General %d, Mensagem: ", Generais[i].Id);
		
		if(Generais[i].Traidor <= 2 ){
			printf("Recuar!!!\n"); 			// se traidor for menor ou igual a 2, suaa mensagem é para recuar
		}else{
			printf("Atacar!!!\n");			// se não for traidor, sua mensagem é para atacar
		} 
	}
	
	for(int i = 0; i <= n_generais; i++){
		if(Generais[i].Traidor <= 2){      // se o numero entre 0 e 10 for menor ou igual a 2, é traídor
			traidores++;
		}
	}
	
	printf("\n\nNumero de generais: %d", n_generais);
	printf("\nNúmero de traídores: %d\n", traidores);
	printf("Número de leais: %d", n_generais - traidores);
	
		if(n_generais >= (3*traidores) + 1 ){ 		// faz a verificação 3*n+1
			printf("\nMensagem validada! Atacar");
		} else {
			printf("\nMensagem não validada!");
		}		
		
	return 0;
}

