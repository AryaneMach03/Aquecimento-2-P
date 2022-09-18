#include <stdio.h>
#include <string.h>

int achouCodon(char vet[], int n){
    int res = 0;
    for (int i=0; i<n-2; i++){
        if(vet[i] == 'A' && vet[i+1] == 'T' && vet[i+2] == 'G'){
            res = 1;
        }
    }
    return res;
}

void main(){

    char dna[100];
    int tamanho;
    printf("Sequencia de DNA: ");
    fflush(stdin);
    gets(dna);
    strupr(dna);
    tamanho = strlen(dna); // deixar letras maiusculas

    if(achouCodon(dna,tamanho) == 1){
        printf("EXISTE");
    }else{
        printf("INEXISTENTE");
    }
}
