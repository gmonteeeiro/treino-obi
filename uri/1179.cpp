#include <bits/stdc++.h>
 
using namespace std;

int par[5], cPar = 0;
int impar[5], cImpar = 0;

void impPar(){
    for(int i = 0; i < cPar; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }

    cPar = 0;
}
void impImpar(){
    for(int i = 0; i < cImpar; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    cImpar = 0;
}

int main(){
    for(int i = 0; i < 15; i++){
        int aux;
        scanf("%d", &aux);

        if(aux % 2 == 0){
            par[cPar] = aux;
            cPar++;

            if(cPar == 5){
                impPar();
            }
        }
        else{
            impar[cImpar] = aux;
            cImpar++;

            if(cImpar == 5){
                impImpar();
            }
        }
    }

    impImpar();
    impPar();

    system("pause");

    return 0;

}