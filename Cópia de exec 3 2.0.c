#include <stdio.h>
#include <stdlib.h>

struct escola{

	int mat;
	float n1;
	float n2;
	float med;
	int fal;
};

int main(){

	struct escola e[20];
	int mat, fal;
	float n1, n2, med;
	int i, j, u = 0, fim = 1;

	for(i = 0; i < 20; i++){

		e[i].mat = 0;
		e[i].n1 = 0;
		e[i].n2 = 0;
		e[i].med = 0;
		e[i].fal = 0;
	}

	while(fim != 0){

		fim = 1;
		n1 = - 1;
		n2 = - 1;

		printf("Matricula: ");
		scanf("%d", &mat);

		while((n1 < 0) || (n1 > 10)){

			printf("Nota 1: ");
			scanf("%f", &n1);
		}

		while((n2 < 0) || (n2 > 10)){

			printf("Nota 2: ");
			scanf("%f", &n2);
		}

		printf("Faltas: ");
		scanf("%d", &fal);
		med = (n1 + n2) / 2;

		j = u;

		if(e[u - 1].mat <= mat){

			e[j].mat = mat;
			e[j].n1 = n1;
			e[j].n2 = n2;
			e[j].med = med;
			e[j].fal = fal;
		}
		else{

			while(e[j - 1].mat > mat){

				j--;
			}

			for(i = u; i >= j; i--){

				e[i + 1].mat = e[i].mat;
				e[i + 1].n1 = e[i].n1;
				e[i + 1].n2 = e[i].n2;
				e[i + 1].med = e[i].med;
				e[i + 1].fal = e[i].fal;

				e[i].mat = mat; 
				e[i].n1 = n1;
				e[i].n2 = n2;
				e[i].med = med;
				e[i].fal = fal;
			}
		}

		u++;

		system("cls");
		printf("Deseja continuar 1 ou 0: ");
		scanf("%d", &fim);
		system("cls");

	}

	system("cls");

	printf("Matricula  nota 1  nota 2  media  faltas\n");

	for(i = 0; i < u; i++){

		printf("    %d       %.1f    %.1f      %.1f     %d\n", e[i].mat, e[i].n1, e[i].n2, e[i].med, e[i].fal);
	}

	return 0;
}
