#include <stdio.h>

#define OK 0
#define ERROR 1

void napisText()
{
	printf("Vypis z funkce\n");
}

int dejMiJednicku()
{
	return 1;
}

int secti(int prvni, int druhe)
{
	int vysledek = prvni + druhe;
	return vysledek;
}

int main()
{
	printf("Tady jsem\n");
	napisText();	
	int promenna1 = dejMiJednicku();
	printf("%d\n", promenna1);
	int vysledek;
	vysledek = secti(promenna1, 11);
	printf("%d\n", vysledek);
	vysledek = secti(promenna1, 12);
	printf("%d\n", vysledek);

	return promenna1;
}