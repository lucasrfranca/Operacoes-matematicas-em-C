#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {

	setlocale(LC_ALL, "Portuguese");
	
	printf ("a subtração de 8 e 6 é: ");
	printf ("%d", 8-6);
	printf ("\n\n");
	
}