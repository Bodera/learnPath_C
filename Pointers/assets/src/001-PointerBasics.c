#include <stdio.h>

int main(int argc, char **argv)
{
    int num;
    int* numPtr; //pointers are declared using the * signal
    int num2;

    num = 100; //variable num holds the int value 100
    numPtr = &num; //the pointer now stores the memory address of the variable num
    num2 = *numPtr; //dereferencing or indirection

    printf("Pointer basics program\n\n");

	printf("num=%d, numPtr=%d, address of num=%d, num2=%d\n", num, numPtr, &num, num2);

	return 0;
}