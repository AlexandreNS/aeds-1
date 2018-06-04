#include <stdio.h>
#include <stdlib.h>

char* criptografaString(char frase[]){
	char *vogais_espaco = "AEIOUaeiou ";
	static char invertido[100];
	int tamanhoString = 0;

	for(int i=0; (frase[i] != '\0') && (frase[i] != '\n'); i++){
		tamanhoString++;
		int vogal = 0;
		for(int j=0; vogais_espaco[j] != '\0'; j++){
			if(frase[i] == vogais_espaco[j]){
				vogal++;
				break;
			}		
		}
		if(vogal == 0){
			frase[i] = '#';
		}
	}
	for(int i=0;(frase[i] != '\0') && (frase[i] != '\n'); i++){
		invertido[i] = frase[tamanhoString-1];
		tamanhoString--;
	}
	
	return invertido;
} 

int main(){
	char frase[100];

	printf("Digite uma frase para ser criptografada:\n");
	fgets(frase, 100, stdin);

	printf("Frase criptografada: %s\n", criptografaString(frase));


	return 0;

} 