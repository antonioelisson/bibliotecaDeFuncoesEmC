/* L� uma string (obsoleta porque pode estourar o tamanho do vetor-estouro de buffer) */
#include <stdio.h>

main(){
	char nome[51];
	
	gets(nome);//l� do teclado
	
	puts(nome);//colocar na tela
}
