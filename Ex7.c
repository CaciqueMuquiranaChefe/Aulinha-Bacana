#include <stdio.h>
#include <string.h>

struct Escola{
    char nome[50];
    int nota1;
    int nota2;
};

int main()
{
    int media = 0;
    struct Escola aluno1;
    strcpy(aluno1.nome,"Magrao");
    aluno1.nota1 = 10;
    aluno1.nota2 = 6;
    media = (aluno1.nota1 + aluno1.nota2) / 2;
     printf("Aluno: %s", aluno1.nome);
     printf("\nNota 1: %d", aluno1.nota1);
     printf("\nNota 2: %d", aluno1.nota2);

printf("\nMedia: %d", media);
     return 0;


}
