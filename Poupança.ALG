Algoritmo "semnome"
// Disciplina  :  [Linguagem e L�gica de Programa��o] 
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 29/08/2018
Var
// Se��o de Declara��es das vari�veis 
deposito, juros, saldo :real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Saldo da Poupan�a")
escreval("Digite o valor do deposito")
leia(deposito)
juros<- (1/100)
Saldo<- (deposito +(deposito*juros))+(deposito*juros)+(deposito*juros)
escreval("O saldo em 3 meses ser� de:", saldo," reais.")

Fimalgoritmo