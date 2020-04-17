#include <bits/stdc++.h>

using namespace std;

int main(){
    int plantacao[60][60];

    int tamanhoPlantacao;
    scanf("%d", &tamanhoPlantacao);

    for(int i = 0; i < tamanhoPlantacao; i++){
        for(int j = 0; j < tamanhoPlantacao; j++){
            scanf("%d", &plantacao[i][j]);
        }
    }

    int qtdColheitas;
    scanf("%d", &qtdColheitas);

    int plantacaoColhida = 0;

    for(int i = 0; i < qtdColheitas; i++){
        int yInicial, yFinal, xInicial, xFinal;
        
        scanf("%d", &xInicial);
        scanf("%d", &yInicial);


        scanf("%d", &xFinal);
        scanf("%d", &yFinal);
        
        xInicial--;
        yInicial--;
        xFinal--;
        yFinal--;

        for(int j = xInicial; j <= xFinal; j++){
            for(int k = yInicial; k <= yFinal; k++){
                plantacaoColhida += plantacao[j][k];
                plantacao[j][k] = 0;
            }
        }

    }

    printf("%d\n", plantacaoColhida);


    return 0;
}