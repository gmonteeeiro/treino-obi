#include <stdio.h>

int main()
{
    int n;
    int menor, pos = 0;
    
    scanf("%d", &n);
    
    scanf("%d", &menor);
    for(int i = 1; i < n; i++){
        int aux;
        scanf("%d", &aux);
        if(aux < menor){
            menor = aux;
            pos = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);

    return 0;
}
