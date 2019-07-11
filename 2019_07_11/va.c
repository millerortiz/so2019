#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	printf("Localización del codigo : %p\n", main);
	printf("localización del monton : %p\n", malloc(100e6));
	int x = 3;
	printf("localización de la pila: %p\n", &x);
	return x;
}
