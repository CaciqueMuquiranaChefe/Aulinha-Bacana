#include <stdio.h>

int main()
{
    int vet[5];
    int menor = 0;
    int maior = 0;

    for(int i = 0; i < 5; i++){
        printf("Numero %d: ", i);
        scanf("%d", &vet[i]);
    }
    menor = vet[0];
    for(int i = 0; i < 5; i++){
        if(menor >= vet[i]){
            menor = vet[i];
        }
        if(maior <= vet[i]){
            maior = vet[i];
        }
    }
    printf("Maior:%d       Menor:%d",maior,menor );
    return 0;
}