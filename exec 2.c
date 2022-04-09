#include<stdio.h>
#include<stdlib.h>

void tela();


int main(){

    int vet[20], num, i = 0, j, fim = 1, ultimo = 0, op;

    tela();
    scanf("%d", &op);

    if(op == 1){

        while(fim != 0){

            printf("Digite um valor: ");
            scanf("%d", &num);

            /*
            if (ultimo == 0){

                vet[ultimo] = num;

            }
            */
            // na segunda vez o if nao se aplica

            if(vet[ultimo] <= num){

                vet[ultimo + 1] = num;
            }
            else{

                while(){
                    // VALOR J QUE VALE 0 E APOS VALER 1 SAI DO WHILE E AO SAIR DO WHILE VOLTA A SER 0
                    // DAR VALOR AO J QUANDO O VET RECEBER O VALOR
                    // NO IF A GENTE ACHA AONDE O VALOR NOVO DEVE SER INSERIDO NO VETOR
                    if()
                    // NO FOR A GENTE MUDA OS VALORES DE POSIÇÃO DA FORMA QUE ORGANIZA O VETOR
                    // V[ULTIMO]=V[ULTIMO+1]
                }
            }
             //ULTIMO ++
        }
    }








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
