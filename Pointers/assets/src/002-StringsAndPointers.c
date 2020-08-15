#include <stdio.h>

int main(int argc, char **argv)
{
	char str_one[] = "Hello world";	

	printf("Strings and pointers program\n\n");

	printf("%s %c %d %d %d\n", str_one, str_one[0], &str_one, &str_one[0], str_one);
	//displays five values:
	//1)-array content
	//2)-first element on the array
	//3)-the array memory address
	//4)-memory address of the first element on the array
	//5)-the address of the array

	return 0;
}