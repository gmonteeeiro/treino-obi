#include <bits/stdc++.h>
 
using namespace std;

int main(){
    float entrada[110];

    for(int i = 0; i < 110; i++){
        scanf("%f", &entrada[i]);
    }

    for(int i = 0; i < 100; i++){
        if(entrada[i] <= 10){
            printf("A[%d] = %.1f\n", i, entrada[i]);
        }    
    }

    return 0;
}