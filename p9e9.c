#include <stdio.h>
#include <stdbool.h>

int main(){
	int cont;
	while(true){
		printf("Ciclo infinito\n");
		break;
	}
	for(int i=0; i<100000;i++){
		printf("Ciclo infinito\n");
		break;
	}
	cont=0;
	while(cont<15){
		if(cont ==3){
			cont++;
			continue;
		}
		printf("%d ", cont++);
	}
	cont=0;
	printf("\n");
	for(cont=0;cont<15;cont++){
		if(cont==3)
			continue;
		printf("%d ", cont);
	}
	printf("\n");
	return 0;
}
