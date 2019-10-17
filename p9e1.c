#include <stdio.h>

main(){
	int num, cont=0;
	printf("Tabla de muntiplicar\n");
	printf("Ingrese número:\n");
	scanf("%d", &num);
	
	printf("La tabla de multiplicar del %d es:\n", num);
	while(++cont<=10)
		printf("%d * %d = %d\n", num, cont, num*cont);

	return 0;
}
