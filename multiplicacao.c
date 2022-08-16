#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {

	setlocale(LC_ALL, "Portuguese");
	
	printf ("a multiplicação de 10 e 2 é: ");
	printf ("%d", 10*2);
	
    printf ("\n\n");
	system ("pause");
	
}