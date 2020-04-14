#include <bits/stdc++.h>
 
using namespace std;

int main(){
    double valor;
    scanf("%lf", &valor);

    for(int i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, valor);

        valor /= 2;
    }

    return 0;
}