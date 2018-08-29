Algoritmo "semnome"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 29/08/2018
Var
// Seção de Declarações das variáveis 
deposito, juros, saldo :real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Saldo da Poupança")
escreval("Digite o valor do deposito")
leia(deposito)
juros<- (1/100)
Saldo<- (deposito +(deposito*juros))+(deposito*juros)+(deposito*juros)
escreval("O saldo em 3 meses será de:", saldo," reais.")

Fimalgoritmo