#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int vet[10];

    for (int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }

    int num;
    scanf("%d", &num);

    for(int i = 0; i < 10; i++){
        if(vet[i] == num){
            printf("SIM\n");
            return 0;
        }
    }

    printf("NAO\n");
    return 0;
}