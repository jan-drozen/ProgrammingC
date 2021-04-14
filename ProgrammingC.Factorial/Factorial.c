#define _CRT_SECURE_NO_WARNINGS //tohle je zde jenom kvuli Visual-Studiu, technicka vec
#include <stdio.h> //pro zpracovani vstupu a vypis programu

//deklarace jednotlivych funkci, ktere jsou implementovany nize pod funkci main
int faktorial_while(int cislo);
int faktorial_for_vzestupne(int cislo);
int faktorial_for_sestupne(int cislo);
int faktorial_rekurzivne(int cislo);

//funkce main = vstupni bod
int main()
{
	int cislo; //deklarujeme promenne, do kterych si docasne ulozime hodnoty
	int vysledek;

	printf("Zadejte kladne cislo a stisknete Enter:\n");
	scanf("%d", &cislo); //nacteme cislo ze standardniho vstupu
	if (cislo < 0) //pokud je cislo zaporne nebo na vstupu nebylo zadane cislo (v tom pripade scanf vrati -1)
	{
		printf("Cislo musi byt kladne!"); //napiseme chybovou hlasku
		return -1; //a program konci
	}


	//zavolame jednotlive funkce na vypocet a vypiseme vysledek
	printf("Faktorial pomoci while-cyklu:\n");
	vysledek = faktorial_while(cislo);
	printf("Faktorial %d je: %d\n", cislo, vysledek);
	printf("\n");

	printf("Faktorial pomoci rostouciho for-cyklu:\n");
	vysledek = faktorial_for_vzestupne(cislo);
	printf("Faktorial %d je: %d\n", cislo, vysledek);
	printf("\n");

	printf("Faktorial pomoci klesajiciho for-cyklu:\n");
	vysledek = faktorial_for_sestupne(cislo);
	printf("Faktorial %d je: %d\n", cislo, vysledek);
	printf("\n");

	printf("Faktorial pomoci rekurze:\n");
	vysledek = faktorial_rekurzivne(cislo);
	printf("Faktorial %d je: %d\n", cislo, vysledek);
	printf("\n");

	return 0;
}

//prvni tri metody na vypocet faktorialu jsou iterativni
//tzn. ze cislo! = 1 * 2 * ... * cislo

//vypocet pomoci while cyklu
int faktorial_while(int cislo)
{
	int vysledek = 1; //promenna, do ktere si ulozime prubezny vysledek
	int postup = 1; //promenna, ve ktere si budeme pamatovat, u ktereho cisla zrovna jsme - zaciname od jednicky
	while (postup <= cislo) //opakujeme, dokud se od jednicky nedostaneme az na vstupni cislo tj. dokud je promenna postup mensi nebo rovna promenne cislo
	{
		vysledek = vysledek * postup; //do prubezneho vysledku ulozime soucin predchoziho vysledku a aktualniho cisla
		postup++; //posuneme se o jedno cislo dal
	}
	return vysledek; //a z prubezneho vysledku je konecny vysledek
}

//vypocet pomoci for-cyklu, ktery narusta
int faktorial_for_vzestupne(int cislo)
{
	int vysledek = 1; //promenna, do ktere si ulozime prubezny vysledek
	for (int i = 1; i <= cislo; i++) //postupne projdeme cisla od 1 ... do hodnoty cislo a aktualni bude ulozene v promenne "i" (ma stejnou funkci jako promenna "postup" v predchozim priklade)
	//syntaxe je: for (deklarujeme promennou typu int se jmenem "i" a nastavime ji na jednicku; budeme cyklus opakovat tak dlouho, dokud i je mensi nebo rovno hodnote promenne "cislo"; po kazdem pruchodu cyklem zvetsime "i" o jednicku)
	{
		vysledek = vysledek * i; //prubezny vysledek vynasobime aktualnim cislem
	}
	return vysledek; //vratime vysledek
}

//vypocet pomoci for-cyklu, ktery klesa
int faktorial_for_sestupne(int cislo)
{
	int vysledek = 1;
	for (int i = cislo; i >= 1; i--) //je to vlastne to same, akorat jdeme od konce - tzn. je to: cislo * (cislo-1) * (cislo-2)*...*1
	//deklarujeme promennou i a nastavime ji na hodnotu z promenne "cislo"; dokud je hodnota v "i" vetsi nebo rovna 1 budeme cyklus opakovat; po kazdem pruchodu zmensime hodnotu v "i" o jednicku
	{
		vysledek = vysledek * i;
	}
	return vysledek;
}


//rekurzivni vypocet - mozna pro tuhle chvili moc slozite, ale elegantni
//opakovani: faktorial iterativne: cislo! = 1 * 2 * ... * cislo
//faktorial rekurzivne ma dve pravidla:
//0! = 1
//cislo! = cislo * (cislo-1)!
//tzn. nepouzivame zadny cyklus, ale funkce vola sama sebe (vnoruje se sama do sebe) tolikrat, kolik je potreba (nez narazi na tzv. "dno rekurze")
int faktorial_rekurzivne(int cislo)
{
	if (cislo == 0) //dno rekurze - podle definice je 0! = 1
		return 1; // takze vratime 1 a nevnorujeme se dal
	return cislo * faktorial_rekurzivne(cislo - 1); //pokud se program dostane na tenhle radek, tak urcite je "cislo" vetsi nez 0, tak jim vynasobime vysledek faktorialu cisla o jedna mensi (volani sama sebe s argumentem o jednicku mensim)
}