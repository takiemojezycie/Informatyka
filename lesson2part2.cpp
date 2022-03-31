#include <iostream>
#define STALA 10 // definiujemy stałą, nie potrzebujemy typu = brak ;

using namespace std;

int main()
{
   // jeśli przed zmienną damy 'const' to tworzymy zmienną, której wartości nie będziemy w stanie zmienić, podczas dawania const musimy od razu podać wartość
   
   const double pi = 3.14;
   double promien;
   string jednostka;
   
   cout << "Podaj jednostkę: ";
   cin >> jednostka;
   
   
   cout << "Podaj promień: ";
   cin >> promien;
   cout << "Pole: " << promien * promien * pi << jednostka << "2" << endl;
   cout << "Średnica: " << promien * 2.0  << jednostka << endl;
   cout << "Obwód: " << 2.0 * pi * promien  << jednostka;
   
    // M_PI stała pi już w programie ale trzeba dać na początku #include <cmath>
   return 0;
  //kartkówka 5 typów danych definiowanie zmiennych i stałych zarządzanie treścią, wypisywanie rzeczy
}
