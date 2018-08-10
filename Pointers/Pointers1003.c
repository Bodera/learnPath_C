#include <stdio.h>

int main(int argc, char **argv){
    char str1[] = "Hello"; //[] é um array, que sabe-se que é equivalente a um endereço
    char *str2 = "Goodbye"; //* é um ponteiro, seu valor não é uma string, mas o endereço do array
    printf("%d %d %s\n", &str1, str1, str1); //endereço do array, endereço do array, conteúdo do array
    printf("%d %d %s\n", &str2, str2, str2); //endereço do array, endereço do ponteiro, conteúdo do array
    return 0;
}
