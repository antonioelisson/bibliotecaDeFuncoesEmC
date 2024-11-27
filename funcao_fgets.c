#include <stdio.h>

main(){
	char frase[100];
	
	printf("Digite a sua frase: ");
	fgets(frase, 99, stdin);
	
	puts(frase);
}
