/* sintaxe das fun��es para arquivos */

//getc
//Somente leitura de 1 caractere no arquivo.
(variavel = getc(ponteiro)) != EOF); 
//Passa o conte�do lido para variavel que faz a compara��o se chegou ao final do arquivo.
//Sempre executado com um loop.

//putc
//Faz a grava��o de 1 caractere no arquivo.
putc(variavel, ponteiro);
//Grava da vari�vel para o ponteiro do arquivo.
//Sempre executado com um loop.

//fgets
fgets(vetor, sizeof(vetor), stdin);//entrada de dados pelo teclado
fgets(vetor, sizeof(vetor), ponteiro);//entrada de dados por um arquivo 
//fazer as verifica��es de erros (== NULL)

fputs(vetor, ponteiro)//faz a grava��o da string no arquivo

fprintf(ponteiro, "frase: %", variavel); //depois do ponteiro segue a formata��o do prinf comum
fscanf(ponteiro, "frase: %", vetor ou &variavel);//s� vai ler uma palavra, pode ser substitu�do pelo fgets para ler frases

fwrite/fread(struct, sizeoftamanho(struct), quantidade de dados do mesmo tipo-struct, ponteiro do arquivo);
