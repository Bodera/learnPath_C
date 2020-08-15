#include <stdio.h>

int main(int argc, char **argv){
    char str1[] = "Hello"; //an array is equivalent to an address
    char *str2 = "Goodbye"; //a pointer whose value is not a string, but is an array address instead

    printf("Arrays addresses and pointers program\n\n");

    printf("%d %d %s\n", &str1, str1, str1); //array address, array address, content of the array
    printf("%d %d %s\n", &str2, str2, str2); //array address, pointer address, content of the pointer

    return 0;
}