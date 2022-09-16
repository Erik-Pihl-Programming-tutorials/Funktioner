/********************************************************************************
* main.c: Demonstration av funktioner i C.
* 
*         En funktionsdefinition innehar f�ljande syntax:
*         
*         returtyp namn(funktionsparametrar)
*         {
*            Mellan m�svingarna l�gger vi funktionens inneh�ll.
*            return returv�rde;
*         }
* 
*         returtyp namn(funktionsparametrar) kallas funktionshuvudet och
*         inneh�ller �vergripande information om funktionen, exempelvis vad
*         den heter, datatypen p� det v�rde som returneras (om n�got vill s�ga)
*         samt funktionsparametrar (v�rden och adresser vi kan skicka med vid
*         funktionsanropet).
* 
*         Resten av funktionen kallas funktionskroppen och utg�r funktionens
*         faktiska inneh�ll. Allt mellan m�svingarna ing�r i funktionen och
*         { indikerar funktionens b�rjan och } indikerar funktionens slut.
*         S� l�nge vi inte anv�nder loopar eller villkorssatser s� exekveras
*         varje instruktion i funktionen uppifr�n och ned tills instruktionen
*         med nyckelordet return genomf�rs, d� funktionen avslutas och ett
*         v�rde returneras (om funktionen skall returnera n�got vill s�ga,
*         annars kan vi skriva return; eller ingenting alls).
* 
*         Returtypen indikerar datatypen p� det v�rde som returneras n�r
*         funktionen avslutas, exempelvis int f�r heltal eller double f�r 
*         flyttal. Ifall inget returv�rde skall returneras skall returtypen 
*         void anv�ndas. 
*
*         F�r att returnera data anv�nds nyckelordet return f�ljt av v�rdet 
*         som skall returneras. Som exempel, f�r att returnera flyttalet 3.4 
*         fr�n en funktion med returtypen double anv�nds f�ljande instruktion:
* 
*         return 3.4;
*
*         F�r voidfunktioner, d�r inget v�rde returneras, �r nyckelordet return 
*         valbart, men kan anv�ndas f�r att tydligg�ra var funktionen avslutas.
* 
*         I parentesen efter funktionsnamnet skrivs funktionsparametrar.
*         Funktionsparametrarna anger datatyp p� eventuell data som passeras 
*         till funktionen. 
*
*         En funktion kan ha godtyckligt antal funktionsparametrar. 
*         Ifall funktionsparametrar saknas skall nyckelordet void skrivs i 
*         parentesen, alternativt kan parentesen h�llas tom.
* 
*        Funktioner som anropas m�ste antingen definieras eller deklareras innan 
*        de anropas. Detta kan genomf�ras genom att placera funktionsdefinitionen 
*        (funktionshuvudet + funktionskroppen) ovanf�r funktionsanropet, 
*        alternativt s� kan funktionen deklareras innan anropet och sedan 
*        defininieras p� annan plats.
* 
*        En funktionsdeklaration best�r enbart av funktionshuvudet, avslutat med 
*        ett semikolon, s�som nedan:            
*        
*        returtyp namn(funktionsparametrar);
* 
*        Funktioner �r som default externa, vilket inneb�r att de �r �tkomliga 
*        utanf�r aktuell fil. Funktioner kan h�llas lokala till en given 
*        k�llkodsfil via nyckelordet static, vilket som en tumregel b�r g�ras 
*        f�r funktioner som enbart skall anv�ndas lokalt (vilket f�renklar f�r 
*        kompilatorn att optimera koden). S�dana funktioner kallas statiska. 
* 
*       En statisk funktion deklareras enligt nedan:
*         
*       static returtyp namn(funktionsparametrar);
* 
*       Statiska funktioner med v�ldigt lite inneh�ll kan s�ttas till 
*       inline-funktioner via nyckelordet inline f�r att f�resl� f�r kompilatorn 
*       att funktionens inneh�ll skall klistras in p� plats d�r funktionen 
*       anropas  i st�llet f�r ett regelr�tt anrop. Detta �r f�rdelaktigt, d� 
*       anrop samt �terhopp fr�n en liten funktion kan kr�va fler 
*       instruktionscykler �n att genomf�ra funktionens inneh�ll. Detta 
*       fungerar dock enbart f�r statiska funktioner.
* 
*       En inline-funktion deklareras enligt nedan:
*              
*       static inline returtyp namn(funktionsparametrar);
********************************************************************************/
#include "header.h"

/********************************************************************************
* main: Summerar tre flyttal 3, 4 samt 6.5 och skriver ut i terminalen.
*       Sedan skrivs flyttal 5.2, 2.1 samt 100 ut p� vad sin rad i terminalen. 
*       Slutligen skrivs �ven tidigare n�mnda flyttal 3, 4 samt 6.5 ut p� var 
*       sin rad i terminalen.  
********************************************************************************/
int main(void)
{
   const double a = 3;
   const double b = 4;
   const double c = 6.5;

   printf("%lg + %lg + %lg = %lg\n\n", a, b, c, get_sum(a, b, c));

   print_numbers(5.2, 2.1, 100);
   printf("\n");

   print_numbers(a, b, c);
   return 0;
}
