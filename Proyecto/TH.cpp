
#include <stdio.h>

void torres_hanoi(int n, char origen, char auxiliar, char destino){
	if(n == 1){
		printf("Mueve el disco 1 desde %c hasta %c\n", origen, destino);
		return;
	}
	torres_hanoi(n-1, origen, destino, auxiliar);
	printf("Mueve el disco %d desde %c hasta %c\n", n, origen, destino);
	torres_hanoi(n-1, auxiliar, origen, destino);
}

int main(){
	int n;
	printf("Ingresa el numero de discos: ");
	scanf("%d", &n);
	
	torres_hanoi(n, 'A','B', 'C');
	
	return 0;
}
