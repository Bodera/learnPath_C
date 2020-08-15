#include <stdio.h>

#define LENGTH 3 //a constant value

int data[LENGTH]; //an array of integers with maximum size of 3 elements

int main(int argc, char **argv) {
    int *pi; //a simple pointer to an integer
    int **ppi; //a pointer to a pointer which points to an integer

    printf("Multiple indirection example\n\n");

    //filling in our integer array
    for (int i = 0; i < LENGTH; i++) {
        data[i] = i;
    }
    //printing our integer array
	for (int i = 0; i < LENGTH; i++) {
		printf("%d\n", data[i]);
	}
    
	pi = data; //set the pointer to an integer to the start of the data array
	ppi = &pi; //and set the pointer to a pointer to pi itself

	for (int i = 0; i < LENGTH; i++) {
		printf("Round %d\n", i+1);
		printf("\ndata[%d] array address is %p\n", i, data);
		printf("item pointed to by pi is %d\n", *pi);
		printf("item pointed to by ppi is %p\n", *ppi);
		printf("item pointed to by double indirection of ppi is %d\n\n", **ppi);
        printf("The address of pi is %p and the value of ppi (what it points to) is %p\n", &pi, ppi);
		printf("The value of pi is %p and it points to %d\n\n", pi, *pi);
    
		pi += 1; //advance the pointer to point to the next element of the data array
	}

	return 0;
}