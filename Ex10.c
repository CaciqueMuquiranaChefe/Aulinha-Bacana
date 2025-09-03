#include <stdio.h>
int maiornum(int vetor[10]) {
    int maior = vetor[0];
    for(int i = 1; i < 10; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}
int main() {
    int vetor[10];
    printf("digite 10 numeros inteiros:\n");
    for(int i = 0; i < 10; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    int maior = maiornum (vetor);
    printf("o maior numero do vetor e: %d\n", maior);   
    return 0;
}