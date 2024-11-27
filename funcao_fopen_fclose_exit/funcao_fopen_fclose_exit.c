#include <stdio.h>

main(){
	FILE *p;
	
	p = fopen("arquivo1.txt", "r");//abre o arquivo já existente no modo r(read)
	
	if(p == NULL){
		printf("Erro ao abrir o arquivo");	
		exit(1);//retorna valor diferente de 0
	}	
	else	
		printf("Arquivo aberto com sucesso");
			
	fclose(p);//fecha o arquivo liberando o buffer
}
