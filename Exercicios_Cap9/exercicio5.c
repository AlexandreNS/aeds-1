#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int permutacao(char cadeia_1[], char cadeia_2[]){
    int len_1 = strlen(cadeia_1);
    int len_2= strlen(cadeia_2);
    if(cadeia_1[len_1 - 1] == '\n') cadeia_1[--len_1] = 0;
    if(cadeia_2[len_2 - 1] == '\n') cadeia_2[--len_2] = 0;

    if(len_1 == len_2){
        for(int i=0; i < len_1; i++){
            int jP = i+1;
            for(int j=jP;j < len_1; j++){
                if(cadeia_1[i] > cadeia_1[j]){
                    char temp_1 = cadeia_1[i];
                    cadeia_1[i] = cadeia_1[j];
                    cadeia_1[j] = temp_1;
                }
                if(cadeia_2[i] > cadeia_2[j]){
                    char temp_2 = cadeia_2[i];
                    cadeia_2[i] = (int) cadeia_2[j];
                    cadeia_2[j] = temp_2;
                }
            }
        }
    }

    if(strcmp(cadeia_1, cadeia_2) == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char codigo_1[256];
    char codigo_2[256];

    printf("Digite a 1° cadeia: \n" );
    fgets(codigo_1, 255, stdin);

    printf("Digite a 2° cadeia: \n" );
    fgets(codigo_2, 255, stdin);

    if (permutacao(codigo_1,codigo_2) == 1) {
        printf("As cadeias sao permutacoes\n");
    }else{
        printf("As cadeias NAO sao permutacoes\n"); 
    }
    return 0;
}
