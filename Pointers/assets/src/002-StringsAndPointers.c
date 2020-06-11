#include <stdio.h>

int main(int argc, char **argv) {
	char str_one[] = "Hello world";	
	printf("%s %c %d %d %d\n", str_one, str_one[0], &str_one, &str_one[0], str_one);
	return 0;
}