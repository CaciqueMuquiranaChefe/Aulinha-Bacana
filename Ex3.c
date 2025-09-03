#include <stdio.h>

int main()
{
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i,j, soma=0;
    
    for(j = 0; j < 3;j++){
        for(i = 0; i < 3;i++){
            printf("    %d  ",mat[j][i]);
        }
        printf("\n");
    }
    for(i = 0; i < 3 ; i++){
    soma = soma + mat[i][0];
    }
    printf("Soma %d", soma);
     return 0;
}