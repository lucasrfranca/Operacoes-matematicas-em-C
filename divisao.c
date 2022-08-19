#include <stdio.h>
#include <stdlib.h>

main () {
	
	float n1, n2, resultado;
	
	printf ("Digite o dividendo: ");
	scanf ("%f", &n1);
	
	printf ("Digite o divisor: ");
	scanf ("%f", &n2);
	
    resultado = n1/n2;
	
	printf ("Resultado = %.2f\n\n", resultado);

}