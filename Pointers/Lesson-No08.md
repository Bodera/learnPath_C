# Multiple indirection with strings

Let's look at another example of multiple indirection, this time with an array of strings.

```c
#include <stdio.h>

#define LENGTH 3

char *words[LENGTH];

int main(int argc, char **argv) {
    char *pc;
    char **ppc;

    printf("Multiple indirection example\n\n");

    words[0] = "zero";
    words[1] = "one";
    words[2] = "two";
    for (int i=0; i < LENGTH; i++) {
        printf("%s\n", words[i]);
    }
    printf("\n");

    ppc = words;
    for (int i=0; i < LENGTH; i++) {
        ppc = words + i;
        pc = *ppc;

        while(*pc != 0) {
            printf("%c-", *pc);
            pc += 1;
        }

        printf("\n");
    }

    return 0;
}
```

On this program we use three variables: __words__ an array containing 3 strings, __pc__ a character pointer, __ppc__ a pointer to a character pointer. Remember that in C strings are a sequence of characters terminated by `null`.

So we can declare a string as pointer to a char, that is, a pointer to the address of the start of the array of characters in a string