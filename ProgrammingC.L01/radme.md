# O čem byla řeč?

Struktura programu v jazyce C. Každý program musí mít vstupní bod (entry point), funkci main.

    int main()

Pro využití více funkcí, které už někdo vytvořil, si je musíme nahrát pomocí `include`:
  
    #include <stdio.h>

`stdio.h` umožňuje vypisování hodnot z programu na obrazovku ~ *standardní výstup* pomocí funkce `printf`.

Funkce je část kódu, která je pojmenovaná, má návratový typ a seznam argumentů (parametry).

    int secti(int prvni, int druhe)

Pokud funkce nemá žádný typ, který by vracela, používá se speciální typ `void`.

     void napisText()

Program se vykonává postupně po řádcích, začne se prvním řádkem `main`, pak se potupuje dál. Při použití = *zavolání* 
funkce se skočí na místo funkce a pokračuje se tam, opět řádek po řádku. Funkce vrací hodnotu pomocí `return`.

Když potřebujeme uložit dočasně nějakou hodnotu, použijeme *proměnnou*. Proměnná má typ a název

    int vysledek;

Vytvořením proměnné = *deklarací* si říkáme o rezervaci místa pro nějaká data, v případě typu `int` o celé číslo.

Proměnné přiřadíme hodnotu pomocí `=`

    vysledek = secti(promenna1, 12);

Deklaraci a přiřazení hodnoty můžeme udělat v jenom kroce.

#### Zdrojový kód je v souboru L01.c

