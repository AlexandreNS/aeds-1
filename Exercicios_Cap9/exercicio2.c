#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* novaLinha(char frase[]){
  static char retorno[255];

  strcpy(retorno, frase);

  for (int i = 0; retorno[i] != '\0'; i++) {
    if (retorno[i] == ' ') {
      retorno[i] = '\n';
    }
  }
  return retorno;
}

int main() {
  char frase[256];

  printf("Digite uma frase:\n");
  fgets(frase, 255, stdin);

  printf("Frase Modificada:\n%s", novaLinha(frase));
  return 0;
}
