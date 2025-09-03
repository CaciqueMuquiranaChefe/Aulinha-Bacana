#include <stdio.h>

int main()
{
    int vet[5], soma = 0, media = 0;

    for(int i=0; i<5; i++){
        printf("Numero %d°: ", i);
            scanf("%d", &vet[i]);
    }
    
    for(int i=0; i<5; i++){
        soma = soma + vet[i];
         
    }
    media = ( soma / 5);
    printf("A soma dos numeros reias é: %d\nA média é:%d",soma, media); 
    return 0;
}