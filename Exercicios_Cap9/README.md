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
O final de uma String é representado por *\0*, dessa forma para percorrer caracter a caracter basta definir um loop com ponto de parada em *\0*
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
