#include <stdio.h>
/**
 * @brief Dato N un numero intero positivo maggiore di 1, generare e visualizzare il numero precedente.
 * 
 * @param argc, Lunghezza dell'array argv
 * @param argv, Array dove vengono salvati i valori inseriti in input dal terminale
 * 
 * @return la funzione ritorna sempre 0
*/
int main(int argc, char *argv[])
{

	int n;

	do
	{
		printf("Inserisci un numero >= 1 : ");
		scanf("%d", &n);
	} while (n < 1);

	n = n - 1;

	printf("Il numero precedente è: %d", n);

	return 0;
}
