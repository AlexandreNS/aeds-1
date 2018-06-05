#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* retirarEspacos(char frase[]){
	for(int i=0; frase[i] != '\0'; i++){
		if (frase[i] == 32){
			frase[i] = '\a';
		}
	}

	return frase;
}

int main(){
	char frase[256];
	printf("Digite uma frase:\n");
	fgets(frase, 255, stdin);

	printf("\nFrase alterada:\n%s", retirarEspacos(frase));
	return 0;
}
