# Guia sobre Registros em Linguagem C

Registros nada mais são que agrupamentos de variaveis, podendo estas serem de tipo diferentes. Em *C* você consegue facilmente declarar Registros assim:
```c
struct <registro> {
  <tipo-1> <campo-1>;
  <tipo-2> <campo-2>;
  <tipo-3> <campo-3>;
  ...
  <tipo-n> <campo-n>;
};
```
Dessa forma você criou um prototipo de um Struct, podendo usa-lo da seguinte forma:
```c
struct <registro> <nome-variavel>;
typedef <registro> <novo-tipo>; //ou ainda definir um novo tipo
<nome-variavel>.<<campo-1> = <valor>;
```
Para criar o registro sem o prototipo você tambem pode fazer assim:
```c
struct {
  <tipo-1> <campo-1>;
  <tipo-2> <campo-2>;
  <tipo-3> <campo-3>;
  ...
  <tipo-n> <campo-n>;
} <nome-variavel>;
```
Alternativamete é valido as duas operações tambem:
```c
struct <registro> {
  <tipo-1> <campo-1>;
  <tipo-2> <campo-2>;
  <tipo-3> <campo-3>;
  ...
  <tipo-n> <campo-n>;
} <nome-variavel>;
```
#### Registros e Ponteiros
Existe a possibilidade de usar um regsitro como ponteiro e ainda um campo de um registro como ponteiro, porem existe algumas diferenças de sintaxe importantes:

**Para ponteiro do tipo Struct:**
```c
struct data aniversario;
struct data *hoje;

hoje = &aniversario;

hoje->dia = 17; 
(*p).dia = 17; //ou ainda
```
**Para ponteiros dentro de um Struct:**
```c
int escolhido;

struct{
  int *sorteado;
} num;

num.sorteado = &escolhido;
*num.sorteado = 42;
*(num.sorteado) = 42; //ou ainda
```
