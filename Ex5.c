#include <stdio.h>

int main()
{
    int mat[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int i,j, maior = 0, posi = 0;
    
    for(j = 0; j < 4;j++){
        for(i = 0; i < 4;i++){
            printf("    %d  ",mat[j][i]);
        }
        printf("\n");
    }
    for(i = 0; i < 4; i++){
        if(maior <= mat[1][i]){
            maior = mat[1][i];
            posi = i ;
        }
    }
    printf("Maior Numero: %d \n Na posicao: Linha: 2 Col:%d", maior, posi + 1);
     return 0;

}
