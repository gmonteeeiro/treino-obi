#include <bits/stdc++.h>

using namespace std;

int main(){
    int quadrado[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &quadrado[i][j]);
        }
    }

    int soma = quadrado[0][0] + quadrado[1][1] + quadrado[2][2];

    if((quadrado[0][2] + quadrado[1][1] + quadrado[2][0]) != soma){
        printf("NAO1\n");
        return 0;
    }

    for(int i = 0; i < 3; i++){
        if((quadrado[i][0] + quadrado[i][1] + quadrado[i][2]) != soma){
            printf("NAO\n");
            return 0;
        }

        if((quadrado[0][i] + quadrado[1][i] + quadrado[2][i]) != soma){
            printf("NAO\n");
            return 0;
        }
    }

    

    printf("SIM\n");

    return 0;
}