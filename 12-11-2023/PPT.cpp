
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

int main(){
	char respuesta_humana;
	int respuesta_maquina;
	
	do{
		printf("\nQue quieres tirar\n");
		printf("r para roca, p para papel, t para tigeras, s para spock, l para lagarto, x para salir:  ");
		scanf("%c", &respuesta_humana);
		respuesta_humana= toupper(respuesta_humana);
		srand(time(NULL));
		respuesta_maquina= ((rand()%5)+1);
		
		switch(respuesta_maquina){
			case 1:
				if(respuesta_humana== 'P'|| respuesta_humana=='S'){
					printf("\nGana el humano");
				}
				else if(respuesta_humana=='R'){
					printf("\nEmpate");
				}
				else{
					printf("\nGana la pc");
				}
				break;
			case 2:
				if(respuesta_humana=='T'|| respuesta_humana=='L'){
					printf("\nGana el humano");
				}
				else if(respuesta_humana=='P'){
					printf("\nEmpate");
				}
				else{
					printf("\nGana la pc");
				}
				break;
			case 3:
				if(respuesta_humana=='R'|| respuesta_humana=='S'){
					printf("\nGana el humano");
				}
				else if(respuesta_humana=='T'){
					printf("\nEmpate");
				}
				else{
					printf("\nGana la pc");
				}
				break;
			case 4:
				if(respuesta_humana=='P'|| respuesta_humana=='L'){
					printf("\nGana el humano");
				}
				else if(respuesta_humana=='s'){
					printf("\nEmpate");
				}
				else{
					printf("\nGana la pc");
				}
				break;
			case 5:
				if(respuesta_humana=='T'|| respuesta_humana=='R'){
					printf("\nGana el humano");
				}
				else if(respuesta_humana=='L'){
					printf("\nEmpate");
				}
				else{
					printf("\nGana la pc");
				}
				break;
			default:
				printf("\nEntrada no valida");
		}
	}while(respuesta_humana!='X');
	
	return 0;
}
