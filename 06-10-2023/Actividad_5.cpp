
#include<stdio.h>
int main(){
	char c;
	printf("Introduce un vocal: ");
	scanf("%d",&c);
	switch(c){
		case 'a':
			printf("De Arbol");
			break;
		case 'e':
			printf("De Elefante");
			break;
		case 'i':
			printf("De India");
			break;
		case 'o':
			printf("De Oso");
			break;
		case 'u':
			printf("De Ultimo");
			break;
		default:
			printf("Eso no es una vocal");
			break;
	}
	fflush(stdin);
}
