#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int letrasDiferentes(char texto[]){
    int len = strlen(texto);
    if(texto[len-1] == '\n') texto[--len] = 0;

    int diferentes = 0;
    char letras[128];
    for(int i=0; texto[i] != '\0'; i++){
        if (texto[i] != 32){
            int novaLetra = 1;
            for (int j=0; letras[j] != '\0'; j++){
                if(texto[i] == letras[j]){
                    novaLetra--;
                }
            }
            if(novaLetra == 1){
                letras[strlen(letras)] = texto[i];
                diferentes++;
            }
        }
    }
    return diferentes;
}

int main(){
    char frase[256];
    printf("Digite uma frase:\n");
    fgets(frase, 255, stdin);

    printf("Existem %d letras diferentes na sua frase\n", letrasDiferentes(frase));
    return 0;
}
