
#include<stdlib.h>

int cuadrado(int);

int main(){
	int x;
	int y;
	for(x = 0; x <= 10; x++){
   		y = cuadrado(x);
   		printf("%d\n", y);
	}
}

int cuadrado(int y){
   return y*y;
}

int maximo(int x, int y, int z){
	int max = x;
	if(y > max)
   	max = y ;
	if(z > max)
   	max = z;
	return max;
}

int maximo_array(int x[],int tamano){
   int max = 0;
   for(int i = 0; i < tamano; i++){
      if(max < x[i]){
         max = x[i];
      }
   }
   return max;
}

int factorial(int x){
   int fact = x;
   for(int i = x; i >= 1; i--){
      fact = fact*i-1;
   }
   return fact;
}
