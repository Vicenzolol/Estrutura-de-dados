#include<stdio.h>
#include<stdlib.h>

void tela();


int main(){

    int vet[20], num, i = 0, j, fim, ultimo = -1, op, loop = 0;

    for(i = 0; i < 20; i++){ //zerar os valores do vetor

    	vet[i] = 0;
    }

    do{

	    tela(); // apresentar tela
	    scanf("%d", &op);

	    system("cls");

	    switch (op){

	    case 1: // inserir dados

	        while(fim != 0){

	        	fim = 1;

	            printf("Digite um valor para ser inserido: ");
	            scanf("%d", &num);

	            if(vet[ultimo] <= num){ // caso o numero seja maior do q o ultimo

	                vet[ultimo + 1] = num;
	            }
	            else{ // caso seja menor do q o ultimo

	            	j = ultimo - 1;

	                while(vet[j] > num){ // encontrar a posicao do novo numero

	                    j--;
	                }

	                for(i = ultimo; i >= j; i--){ // aplicando o novo valor e ajustando o vetor

	                	vet[i + 1] = vet[i];
	                }
	            }

            ultimo++;

	        system("cls");

	        printf("Deseja continuar 1 ou 0: "); // finalizar os pedidos de numero
	        scanf("%d", &fim);

	        system("cls");
	        }

	    break;

	    case 2: // buscar dados

	    	printf("Digite o valor que esta procurando: ");
	    	scanf("%d", &num);

	    	system("cls");

	    	for(i = 0; i < (ultimo + 1); i++){

	    		if(vet[i] == num){

	    			printf("Esta na posicao %d do vetor", i + 1);
	    		}
	    	}

	    	printf("\n\n");
	    	system("pause");

	    break;

	    case 3: // listar os dados

	    	printf("VALORES: ");

	    	for(i = 0; i < (ultimo + 1); i++){

	    		printf("%d ", vet[i]);
	    	}

            printf("\n\n");
	    	system("pause");

	    break;

	    case 4: // sair

	    	loop = 1;

	    break;
	    }

    system("cls");

	}while(loop == 0);

	return 0;
}

void tela(){

    puts("#################");
    puts("## 1. INSERIR  ##");
    puts("## 2. BUSCAR   ##");
    puts("## 3. LISTAR   ##");
    puts("## 4. SAIR     ##");
    puts("#################");
}
