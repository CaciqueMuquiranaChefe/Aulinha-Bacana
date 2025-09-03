#include <stdio.h>

int main()
{
    int vet[10], neg, posi, zero;
    
    for(int i=0; i<10;i++){
        printf("Digite o %d° numero: ", i);
        scanf("%d", &vet[i]);
    }
    
    for(int i=0; i<10;i++){
        if(vet[i] < 0){
            neg=neg + 1;
        }else if(vet[i] > 0){
            posi=posi + 1;
        }
        else if(vet[i] == 0){
        zero= zero + 1;
    }
    }
    printf("Positivos: %d \nNegativos: %d \nNumeros Zero: %d",posi, neg, zero);
    return 0;
}