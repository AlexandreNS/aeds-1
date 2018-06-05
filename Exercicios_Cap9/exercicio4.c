#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* retirarEspacos(char frase[]){
    int len = strlen(frase);
    if (frase[len - 1] == '\n') frase[--len] = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 32) {
            int proximo = 1;
            while (frase[i+proximo] == 32) {
                frase[i+proximo] = '\a';
                proximo++;
            }
        }
    }

    int whiteFinal = strlen(frase) - 1;
    while (frase[whiteFinal] == 7 || frase[whiteFinal] == 32) {
        if(frase[whiteFinal] == 32) frase[whiteFinal] = '\a';
        whiteFinal--;
    }

    if (frase[0] == 32) frase[0] = '\a';

    return frase;
}

int numPalavras(char texto[]){
    int numWord = 1;
    for (int i = 0; texto[i] != '\0' ; i++) {
        if (texto[i] == 32) numWord++;
    }
    return numWord;
}

int main(){
	char frase[256];
	printf("Digite uma frase:\n");
	fgets(frase, 255, stdin);

    printf("\nA frase tem %d palavras\n", numPalavras(retirarEspacos(frase)));
	return 0;
}
