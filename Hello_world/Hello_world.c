//O comando #include serve para declarar as bilbiotecas que serão utilizadas
#include <stdio.h> //O 'stdio.h' contém as funções de leitura do teclado e escrita em tela
#include <stdlib.h>
#include <locale.h> //Biblioteca para incluir idioma em português

//Início do Programa
//Muitos programas começam com a função 'void main', mas como este não retorna nenhum valor a mais apropriada é a "main" como inteira (int main), usada abaixo, pois o seu valor poderá indicar se o programa foi finalizado corretamente ou não.
int main () {

//Escreve uma mensagem na tela de saída. Obs.: Sempre entre aspas duplas e não esquecer ao final de colocar ponto e vírgula:
    printf("Hello, World!"); 

//Comando para fazer com que o terminal use a lingua padrão do sistema
    setlocale(LC_ALL, "");

    printf("Olá, mundo!");

return 0;   

}