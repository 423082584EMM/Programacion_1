
#include <stdio.h>

int main(){
  	int *pe;
  	int tam;
  	printf("Cuantos elementos quieres: ");
  	scanf("%d",&tam);
  	pe = malloc(tam * sizeof(int));
  	for(int i = 0;i < tam; i++){
    	printf("ingresa un n�mero");
    	scanf("%d",&pe[i]);
    }
    free(pe);
  	return 0;
}

