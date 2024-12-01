# Medidor de Regressão

Este experimento utiliza um arquivo de texto com 10 parágrafos de Lorem Ipsum, um conhecido texto modelo, para criar arquivos com 10, 20, 30,..., até 1000 parágrafos. Os arquivos de texto são convertidos por um programa em C, e os tempos são medidos para que seja possível treinar uma regressão linear que modele o comportamento do programa, que tem complexidade O(n).

## Execução

Execute o script `./gera_arquivos_texto.sh`. Dezenas de arquivos texto serão criados.

Execute `converte_arquivos_texto.sh`. Este script executa o Medidor e o programa avaliado, o TransformaTexto.
No final do processo, as estatísticas estarão no arquivo `regressão.log`
 
