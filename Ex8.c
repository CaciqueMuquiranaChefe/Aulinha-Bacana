#include <stdio.h>
#include <string.h>

struct Produto{
    char Descricao[50];
    int preco;
    float peso;
};

int main()
{
    int soma1=0, soma2=0;
    struct Produto prod1,prod2;
    strcpy(prod1.Descricao,"Macarrao");
    prod1.preco = 90;
    prod1.peso = 12;
    strcpy(prod2.Descricao,"Cafe");
    prod2.preco = 120;
    prod2.peso = 2;
     printf("Descricao produto 1: %s", prod1.Descricao);
     printf("\nPreco: %d", prod1.preco);
     printf("\nPeso : %f", prod1.peso);

     printf("Descricao produto 2: %s", prod2.Descricao);
     printf("\nPreco: %d", prod2.preco);
     printf("\nPeso : %f", prod2.peso);

    soma1 = prod1.peso + prod2.peso;
    soma2 = prod1.preco + prod2.preco;
printf("Preco somado: %d \n Peso somado: %d",soma1, soma2);
     return 0;

}