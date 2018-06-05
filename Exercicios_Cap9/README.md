# Guia sobre Strings em Linguagem C

#### Definição de uma String
Na linguagem C, Strings são reprensentadas como uma sequencia de *chars*, e podem ser facilmente criados assim:

```c
char nome[30]; 
```

Você tambem pode definir uma cadeia constante de caracteres assim:
```c
char* vogais;
vogais = "AEIOUaeiou";
```
O final de uma String é representado por **\0**, dessa forma para percorrer caracter a caracter basta definir um loop com ponto de parada em **\0**
```c
for (int i=0; nome[i] != '\0'; i++){
  printf("%c\n", nome[i]);
}
```
#### Leitura de uma String
Para ler uma variavel do tipo String em c usa-se a função *fgets()*, nela são passados 3 parametros:
* Variavel
* Quantidade de Bytes
* Local de onde vai pegar os dados (geralmente *stdin* para o teclado)

Uso padrão: 
```c
char nome[100];
fgets(nome, 99, stdin);
```
Em alguns sistemas, a tecla _\<enter\>_ adiciona um **\n** no final da String, sendo necessario uma verificação antes de usar a variavel:
```c
int len = strlen(variavel);
if ( variavel[ len - 1 ] == '\n' ) variavel[ --len ] = 0;
```
#### Escrita de uma String
Para imprimir na tela uma String existem duas formas gerais, pela função *printf()* ou pela função *fputs()*:
```c
printf("%s\n", texto);
fputs(nome, stdout);
```
#### Uso da Biblioteca <string.h>
A Biblioteca *<string.h>* facilita a manipulação de Strings em C, uma vez que adiciona funcões de uso geral. Algumas delas são listadas abaixo:

Sintaxe | O que ela faz | Exemplo
------------ | -------------|----------
`unsigned int strlen (char *x);`| Retorna a quantidade de bytes da String | `num = strlen(texto);`
`char *strcpy (char *y, char *x);` | Copia o conteudo do 2° parametro para a variavel do 1° parametro e retorna ela | `strcpy(vogais, "AEIOUaeiou");`
`char *strcat (char *x, char *y);`| Concatena a 1° String com a 2° e retorna o 1° parametro alterado | `strcat(nome, sobrenome);`
`int strcmp (char *x, char *y);`| Compara duas Strings lexicograficamente duas Strings, retornando 0 se forem iguais | `ordem = strcmp(aluno1, aluno2);`
`int srtcasecmp(const char *x, const char *y);` | Compara duas Strings, desconsiderando maisculas de minusculas | `ordem = srtcasecmp(pessoa1, objeto1);`

#### Criação de Funções
Para criar funçoes com retornem String basta você definir o tipo de retorno como ponteiro de um char, existe a possibilidade de retornar a varivel fornecida nos parametros ou variaveis de dentro do escopo da função usando *static* no momento da declaração:

```c
char* retornaString(char texto[]){
  return texto;
}

char* retornaString(){
  static char nome[255];
  return nome;
}
```
