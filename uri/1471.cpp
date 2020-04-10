#include <bits/stdc++.h>
 
using namespace std;

int main(){

    //número de voluntários que mergulhou e o número de voluntários que retornou do mergulho
    //A segunda linha da entrada contém R inteiros, indicando os voluntários que retornaram do mergulho (ao menos um voluntário retorna do mergulho).

    int qtdMergulho;
    while(scanf("%d",&qtdMergulho) != EOF){
        int voltaram[10010];

        int qtdVoltou;
        scanf("%d", &qtdVoltou);

        for(int i = 0; i < qtdVoltou; i++){
            scanf("%d", &voltaram[i]);
        }

        if(qtdMergulho == qtdVoltou){
            printf("*");
        }
        else{
            for(int i = 1; i <= qtdMergulho; i++){
                int voltou = 0;
                for(int j = 0; j < qtdVoltou; j++){
                    if(i == voltaram[j]){
                        voltou = 1;
                        break;
                    }
                }
                if(voltou == 0){
                    printf("%d ", i);
                }
            }
        }

        
        printf("\n");
    }

    return 0;
}