/********************************************************************************
* main.c: Demonstration av funktioner i C.
* 
*         En funktionsdefinition innehar följande syntax:
*         
*         returtyp namn(funktionsparametrar)
*         {
*            Mellan måsvingarna lägger vi funktionens innehåll.
*            return returvärde;
*         }
* 
*         returtyp namn(funktionsparametrar) kallas funktionshuvudet och
*         innehåller övergripande information om funktionen, exempelvis vad
*         den heter, datatypen på det värde som returneras (om något vill säga)
*         samt funktionsparametrar (värden och adresser vi kan skicka med vid
*         funktionsanropet).
* 
*         Resten av funktionen kallas funktionskroppen och utgör funktionens
*         faktiska innehåll. Allt mellan måsvingarna ingår i funktionen och
*         { indikerar funktionens början och } indikerar funktionens slut.
*         Så länge vi inte använder loopar eller villkorssatser så exekveras
*         varje instruktion i funktionen uppifrån och ned tills instruktionen
*         med nyckelordet return genomförs, då funktionen avslutas och ett
*         värde returneras (om funktionen skall returnera något vill säga,
*         annars kan vi skriva return; eller ingenting alls).
* 
*         Returtypen indikerar datatypen på det värde som returneras när
*         funktionen avslutas, exempelvis int för heltal eller double för 
*         flyttal. Ifall inget returvärde skall returneras skall returtypen 
*         void användas. 
*
*         För att returnera data används nyckelordet return följt av värdet 
*         som skall returneras. Som exempel, för att returnera flyttalet 3.4 
*         från en funktion med returtypen double används följande instruktion:
* 
*         return 3.4;
*
*         För voidfunktioner, där inget värde returneras, är nyckelordet return 
*         valbart, men kan användas för att tydliggöra var funktionen avslutas.
* 
*         I parentesen efter funktionsnamnet skrivs funktionsparametrar.
*         Funktionsparametrarna anger datatyp på eventuell data som passeras 
*         till funktionen. 
*
*         En funktion kan ha godtyckligt antal funktionsparametrar. 
*         Ifall funktionsparametrar saknas skall nyckelordet void skrivs i 
*         parentesen, alternativt kan parentesen hållas tom.
* 
*        Funktioner som anropas måste antingen definieras eller deklareras innan 
*        de anropas. Detta kan genomföras genom att placera funktionsdefinitionen 
*        (funktionshuvudet + funktionskroppen) ovanför funktionsanropet, 
*        alternativt så kan funktionen deklareras innan anropet och sedan 
*        defininieras på annan plats.
* 
*        En funktionsdeklaration består enbart av funktionshuvudet, avslutat med 
*        ett semikolon, såsom nedan:            
*        
*        returtyp namn(funktionsparametrar);
* 
*        Funktioner är som default externa, vilket innebär att de är åtkomliga 
*        utanför aktuell fil. Funktioner kan hållas lokala till en given 
*        källkodsfil via nyckelordet static, vilket som en tumregel bör göras 
*        för funktioner som enbart skall användas lokalt (vilket förenklar för 
*        kompilatorn att optimera koden). Sådana funktioner kallas statiska. 
* 
*       En statisk funktion deklareras enligt nedan:
*         
*       static returtyp namn(funktionsparametrar);
* 
*       Statiska funktioner med väldigt lite innehåll kan sättas till 
*       inline-funktioner via nyckelordet inline för att föreslå för kompilatorn 
*       att funktionens innehåll skall klistras in på plats där funktionen 
*       anropas  i stället för ett regelrätt anrop. Detta är fördelaktigt, då 
*       anrop samt återhopp från en liten funktion kan kräva fler 
*       instruktionscykler än att genomföra funktionens innehåll. Detta 
*       fungerar dock enbart för statiska funktioner.
* 
*       En inline-funktion deklareras enligt nedan:
*              
*       static inline returtyp namn(funktionsparametrar);
********************************************************************************/
#include "header.h"

/********************************************************************************
* main: Summerar tre flyttal 3, 4 samt 6.5 och skriver ut i terminalen.
*       Sedan skrivs flyttal 5.2, 2.1 samt 100 ut på vad sin rad i terminalen. 
*       Slutligen skrivs även tidigare nämnda flyttal 3, 4 samt 6.5 ut på var 
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
