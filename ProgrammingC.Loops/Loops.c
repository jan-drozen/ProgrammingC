//Uvodni priklady s pouzitim cyklu

// stdio.h? STD = STanDardni IO =Input/Output (vstup/vystup) .h = header (obsahuje deklarace funkci)
//to potrebujeme proto, aby program mohl vypsat nejaky vystup
#include <stdio.h>

//definujeme konstantu OK s hodnotou 0. To se hodi hlavne pro veci, ktere se nemeni a pouzivaji se opakovane
#define OK 0

//deklarace funkci, ktere se budou dale pouzivat
//deklarace = navratovy typ, jmeno, seznam parametru (argumentu)
//void je specialni typ pro funkce, ktere nevraceji zadnou hodnotu

//vypise radek hvezdicek na vystup, jen pro prehled
void printSeparator();

//jednotlive priklady na cykly
//void = nepotrebujeme zadny vysledek (jenom vypiseme cisla na vystup)
//loopX = nazev
//() = nepotrebujeme zadne parametry/argumenty pro ovlivneni vysledku
void loop1();
void loop2();
void loop3();
void loop4();
void loop5();
void loop6();
void loop7();
void loop8();

//entry point (vstupni bod programu)
//kazdy program musi mit vstupni bod, aby vedel, odkud ma zacit
//v jazyce C je urceny prave takto
//jmenuje se main a vraci int = integer = cele cislo
int main()
{
	//spustime prvni priklad = zavolame funkci loop1()
	loop1();
	//vypiseme hvezdicky
	printSeparator();
	loop2();
	printSeparator();
	loop3();
	printSeparator();
	loop4();
	printSeparator();
	loop5();
	printSeparator();
	loop6();
	printSeparator();
	loop7();
	printSeparator();
	loop8();

	//vracime drive definovany kod OK = 0. 0 vetsinou znamena, ze vsechno probehlo v poradku.
	return OK;
}

//definice funkce printSeparator
//deklarace je nahore, tohle je definice
//obsahuje jednak deklaraci = navratovy typ, nazev, seznam argumentu (rovnez se tomu rika signatura funkce)
//ale hlavne obsahuje samotne telo (implementaci) funkce ve slozenych zavorkach (blok kodu)

void printSeparator()									//signatura
{														//zacatek funkce
	printf("************************************\n");	//funkce printf deklarovana v souboru stdio.h, ktera vypise hvezdicky a odradkuje (\n = newline), kazdy prikaz (statement) konci strednikem;
}														//konec funkce

//funkce pro prvni priklad - chceme vypsat cisla 0,1,2,3,4
void loop1()
{
	int i = 0;					//deklarace promenne typu int se jmenem "i" a prirazenim hodnoty 0
								//to same ve dvou radcich:
								//int i;	//nejprve deklarace
								//i = 0;	//potom prirazeni hodnoty
	while (i < 5)				//dokud je hodnota v promenne i mensi nez 5, tak se bude opakovat nasledujici blok kodu
	{								//zacatek bloku. Byva zvykem jednotlive bloky posouvat tabulatorem
		printf("%d\n", i++);			//vypiseme hodnotu v promenne i, odradkujeme a zvysime hodnotu v i o 1
	}								//konec bloku
	/*
	* To same ve vice krocich by vypadalo takto:
	* printf(i);
	* printf("\n");
	* i = i + 1;
	*/
}

void loop2()
{
	int i = 10;
	while (i < 15)
	{
		printf("%d\n", i++);
	}
}

void loop3()
{
	int i = 100;
	while (i > 95)
	{
		printf("%d\n", i--);
	}
}

void loop4()
{
	int i = 10;
	while (i <= 1000000)
	{
		printf("%d\n", i);
		i = i * 10;
		//i *= 10;
	}
}

void loop5()
{
	int i = 256;
	while (i >= 16)
	{
		printf("%d\n", i);
		i /= 2;
		//i >>= 1;
	}
}

void loop6()
{
	int i = 11;
	while (i < 100)
	{
		printf("%d\n", i);
		i += 2;
	}
}

void loop7()
{
	int i = 12;
	while (i < 100)
	{
		printf("%d\n", i);
		i += 2;
	}
}

void loop8()
{
	int i = 15;
	while (i < 100)
	{
		printf("%d\n", i);
		i += 5;
	}
}
