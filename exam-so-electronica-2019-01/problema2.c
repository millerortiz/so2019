#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

float v;

void *division(void *arg)
{
	float y,z;
	y = 350;
	z = 25;
	v = z/y;
}

void *multi(void *arg)
{
	sleep(2);
	float x, r;
	x = 1250;
	r = x*v;
	printf("%f\n",r);
}


int main()
{
	int valor=1;
	int valor2=1;
	pthread_t hilo1;
	pthread_t hilo2;
	pthread_create(&hilo1, NULL, division, &valor);
	pthread_create(&hilo2, NULL, multi, &valor2);
	pthread_join(hilo1, NULL);
	pthread_join(hilo2,NULL);
	return 0;
}
