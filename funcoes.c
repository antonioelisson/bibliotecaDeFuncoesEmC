/* sintaxe das funções para arquivos */

//getc
//Somente leitura de 1 caractere no arquivo.
(variavel = getc(ponteiro)) != EOF); 
//Passa o conteúdo lido para variavel que faz a comparação se chegou ao final do arquivo.
//Sempre executado com um loop.

//putc
//Faz a gravação de 1 caractere no arquivo.
putc(variavel, ponteiro);
//Grava da variável para o ponteiro do arquivo.
//Sempre executado com um loop.

//fgets
fgets(vetor, sizeof(vetor), stdin);//entrada de dados pelo teclado
fgets(vetor, sizeof(vetor), ponteiro);//entrada de dados por um arquivo 
//fazer as verificações de erros (== NULL)

fputs(vetor, ponteiro)//faz a gravação da string no arquivo

fprintf(ponteiro, "frase: %", variavel); //depois do ponteiro segue a formatação do prinf comum
fscanf(ponteiro, "frase: %", vetor ou &variavel);//só vai ler uma palavra, pode ser substituído pelo fgets para ler frases

fwrite/fread(struct, sizeoftamanho(struct), quantidade de dados do mesmo tipo-struct, ponteiro do arquivo);
