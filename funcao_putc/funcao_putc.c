#include <stdio.h>

main(){
	FILE *p;
	char frase[100];
	int i;
	
	p = fopen("frase.txt", "w");
	
	if(p == NULL){
		printf("Erro ao abrir o arquivo");	
		exit(1);//retorna valor diferente de 0
	}	
	else{
		printf("Digite sua frase: ");
		gets(frase);
		
		for(i = 0; frase[i]; i++)
			putc(frase[i], p);
	}
	fclose(p);
}
