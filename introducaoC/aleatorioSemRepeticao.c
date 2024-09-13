#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6

/*
  Gerar números aleatórios sem repetição
*/

int main(){
	int vetor[SIZE], aux;

	srand(time(NULL));

	for(int i=0; i < SIZE; i++){
		vetor[i] = rand() % 60;
		for(int j=0; j < i; j++){
			if(vetor[j] == vetor[i]){
				i--;
			}
		}
	}

	for(int i=0; i < SIZE - 1; i++){
		int precisaRepetir = 0;
		for(int j = 0; j < SIZE - i - 1; j++){
			if(vetor[j] > vetor[j + 1]){
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
				precisaRepetir = 1;
			}
		}
		if(!precisaRepetir) break;
	}

	for(int i=0; i < SIZE; i++){
		if(i % 10 == 0) printf("\n");
		printf("%3d ",vetor[i]);
	}

	printf("\n\n");

	return 0;
}
