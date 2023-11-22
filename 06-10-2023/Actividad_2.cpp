
#include<stdio.h>
int main(){
	int opcion = 0;
	
	while( opcion != 5){
  		printf("Introduce una opcion\n");
  		printf("Opcion 1: Torres de Hanoi\n");
  		printf("Opcion 2: Lobo,oveja y maiz\n");
  		printf("Opcion 3: Antro\n");
  		printf("Opcion 4: Impuestos\n");
  		printf("Opcion 5: Salir\n");
  		printf("\n\n\n");
  		scanf("%d",&opcion);
  		if(opcion == 1){
  		printf("Codigo de Hanoi\n\n");
  		}
  		if(opcion == 2){
  		printf("Lobo, oveja y maiz\n\n");
  		}
  		if(opcion == 3){
  		printf("Antro\n\n");
  		}
  		if(opcion == 4){
  		printf("Impuestos\n\n");
  		}
  		if(opcion == 5){
  		printf("Salio del ciclo\n\n");
  		}
  	}
	
}


