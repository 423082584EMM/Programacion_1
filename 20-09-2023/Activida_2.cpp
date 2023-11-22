
#include<stdio.h>
#include<math.h>
//Programa que calcula la hipotenusa, área y perímetro de un triángulo
int main(){
	
	float cat_a, cat_b, hipotenusa, area, perimetro;
	printf("Introduce un cateto: ");
	scanf("%f",&cat_a);
	printf("Introduce el otro cateto: ");
	scanf("%f",&cat_b);

	hipotenusa = sqrt(cat_a*cat_a + cat_b*cat_b);

	area = (cat_a*cat_b)/2;

	perimetro = (cat_a + cat_b + hipotenusa);

	printf("\nLa hipotenusa del triangulo es: %.1f", hipotenusa);
	printf("\nEl area del triangulo es: %.1f", area);
	printf("\nEl perimetro del triangulo es: %.1f", perimetro);
	return 0;
} 
