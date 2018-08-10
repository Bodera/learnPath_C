#include <stdio.h>

int main(){
    char str1[] = "Hello word!"; //Char '' <> String ""; // Todo fim de string é adicionado o caractere de nulidade '\0'
    printf("%s %c %d %d %d\n", str1, str1[0], &str1, &str1[0], str1); //Imprime o conteúdo da string, depois o primeiro
                                                                      //caractere da string, depois o endereço na memória
                                                                      //da máquina ocupado pela string, depois o endereço
                                                                      //na memória ocupado pelo primeiro caractere, e por fim
                                                                      //para saber o endereço do array basta printá-lo com %d
    return 0;
}
