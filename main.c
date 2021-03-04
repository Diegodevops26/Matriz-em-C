#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i,valor,soma;
	for (i=0;i<=6;i++) {
		valor = 0;
			valor = i + valor;
			printf("%d ", valor);
		printf("\n");
    }
    system("pause");
    return 0;
}
