#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int valor;
    scanf("%d", &valor);

    int count = 0;
    for(int i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, count);

        if(count < valor - 1) count++;
        else count = 0;
    }

    return 0;
}