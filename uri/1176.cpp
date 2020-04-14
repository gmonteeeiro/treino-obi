#include <stdio.h>

int main(){
    unsigned long long int fibonacci[62];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    
    for(int i = 2; i < 62; i++){
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    int entradas;
    scanf("%d", &entradas);

    for(int i = 0; i < entradas; i++){
        int teste;
        scanf("%d", &teste);
        printf("Fib(%d) = %llu\n", teste, fibonacci[teste]);
    }

    return 0;
}