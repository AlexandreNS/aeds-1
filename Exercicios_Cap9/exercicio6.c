#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* duplicaCaractere(char texto[]){
    int len = strlen(texto);
    if(texto[len-1] == '\n') texto[--len] = 0;

    static char duplicado[256];
    int j=0;
    for (int i=0; texto[i] != '\0'; i++) {
        if(texto[i] != 32){
            duplicado[j] = texto[i];
            duplicado[j+1] = texto[i];
            j=j+2;
        }else{
            duplicado[j] = texto[i];
            j++;
        }
    }
    return duplicado;
}

int main(){
    char frase[256];
    printf("Digite uma frase:\n");
    fgets(frase, 255, stdin);

    printf("Duplicando cada caractere fica assim:\n%s\n", duplicaCaractere(frase));

    return 0;
}
