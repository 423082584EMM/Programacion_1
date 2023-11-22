
#include <stdio.h>

int main(){
	
	int cambio[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int total[9] = {0};
	int dinero, aux1;
	printf("Introduce el dinero a cambiar: ");
	scanf("%d",&dinero);
	
	for(int i=0; i<10; i++){
		while(dinero>=cambio[i]){
			aux1 = dinero%cambio[i];
			if(aux1==0 || dinero>=aux1){
				total[i]+=1;
				dinero-=cambio[i];
				
			}
		}
		
	}
	
	for(int j=0; j<10; j++){
		printf("\n%d monedas/billetes de: %d", total[j], cambio[j]);
	}
	return 0;
}
