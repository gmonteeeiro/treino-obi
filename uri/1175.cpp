#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int vet[20];

    for(int i = 19; i >= 0; i--){
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, vet[i]);
    }

    return 0;
}