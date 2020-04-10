#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int qtdCem = 0;
    int vet[10010];

    int tam;
    scanf("%d", &tam);
    for(int i = 0; i < tam; i++){
        int aux;
        scanf("%d", &aux);
        vet[i] = aux;
    }

    for(int i = 0; i < tam - 2; i++){
        if(vet[i] == 1 && vet[i + 1] == 0 && vet[i + 2] == 0){
            qtdCem++;
        }
    }
    printf("%d\n", qtdCem);
    system("pause");
    return 0;
}