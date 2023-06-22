#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	int num, i, j;
	bool primo;
	printf("Mostrar los numeros primos hasta el numero: ");
	scanf("%d", &num);
	if(num<2){
		printf("\nNo hay numeros primos menores que %d", num);
	}else{
		printf("\nPrimos: ");
		for(i=2; i<=num; i++){
			primo = true;
			for(j=i-1; j>1; j--){
				if(i%j==0){
					primo = false;
					break;
				}
			}
			if(primo){
				printf("%d ", i);
			}
		}	
	}
	printf("\n\nFin del programa.");
	return 0;
}
