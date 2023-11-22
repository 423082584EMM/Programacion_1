
#include<stdio.h>
int main(){
	
	int cont = 10;
	while(cont >= 1){
	    cont -= 1; //cont = cont -1;
	    if(cont == 4){
			break;
	    }
	    printf("%d\n",cont);
	}
}

