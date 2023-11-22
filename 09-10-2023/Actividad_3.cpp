
#include <stdio.h>
#include <string.h>

int main(){
  	char x[] = "hola mundo";
  	char y[12];
  	int i;
  	for(i = 0;i<strlen(x);i++){
    	if(x[i] == ' '){
     		y[i] = ' ';
    	}
    	else{
			y[i] = x[i] - 32;
    	}
    	printf("%c",y[i]);
    }
}
