#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *t;
	long p;
	char leer;
	t = fopen("texto.txt","r");
	  if(t==NULL)
            {
              printf("No existe el archivo texto.txt\n");
            }
	fseek(t,0, SEEK_END);
	p = ftell(t);
	for(p-=1;p>=0;--p)
	{
	  fseek(t,p,SEEK_SET);
	  leer = fgetc(t);
	  printf("%c",leer);
	}
	printf("\n");
	return 0;
}
