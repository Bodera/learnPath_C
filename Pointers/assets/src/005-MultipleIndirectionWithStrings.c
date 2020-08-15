#include <stdio.h>

#define LENGTH 3 //the number of elements in our array

char *words[LENGTH]; //an array for some strings

int main(int argc, char **argv) {
    char *pc; //pointer to a char
    char **ppc; //pointer to a pointer to a char

    printf("Multiple indirection example\n\n");

    //let's initialize our string array
    words[0] = "zero";
    words[1] = "one";
    words[2] = "two";
    for (int i=0; i < LENGTH; i++) {
        printf("%s\n", words[i]);
    }
    printf("\n");

    ppc = words; //the ppc hab been initialized with the whole array
    /*
     Uncomment line below in case you do not understand what's going on here.
     printf("%p -- %p -- %p\n", words, &words, ppc);
    */

    for (int i=0; i < LENGTH; i++) { //start looping over each string
        ppc = words + i; //ppc now stores
        pc = *ppc;

        while(*pc != 0) {
            printf("%c-", *pc);
            pc += 1;
        }

        printf("\n");
    }

    return 0;
}