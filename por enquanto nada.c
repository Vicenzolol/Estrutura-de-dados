#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");

    int vetordenumeros[20] = {5,7,8,10,11,13,15,17,19,20,21,23,27,37,39,41,43,44,48,91};
    int inicio;
    int indice;
    int tamanhodovetor = 0;
    int numeroescolhido;
    int busca = 0;

    printf("Número à encontrar: ");
    scanf("%d", &numeroescolhido);

    tamanhodovetor = sizeof(vetordenumeros)/sizeof(int);

    int fim=tamanhodovetor-1;

    for(inicio = 0; inicio <= (fim); inicio++){

        if(vetordenumeros[fim/2]==numeroescolhido){
            busca++;
            printf("O número escolhido foi %d e a quantidade de busca foi %d", vetordenumeros[fim/2],busca);
            indice=inicio;
            if(vetordenumeros[fim/2]<numeroescolhido){
                    for(inicio = 0; inicio <= ((fim - indice) /2); inicio++){

                    }
            }
        }
    }

    //é pra usar ele

    do{


    }while



}
