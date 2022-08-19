#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {

	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, media;
	
	printf ("Digite o primeiro número: ");
	scanf ("%f", &n1);
	
	printf ("Digite o segundo número: ");
	scanf ("%f", &n2);
	
	media = (n1+n2)/2;
	
	printf ("A média dos dois números = %.2f\n\n", media);

}