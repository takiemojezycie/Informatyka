#include <iostream>
#include <cstdlib>

using namespace std;

int
main ()
{
  /*
     int x;
     cout << "podaj liczbe: ";
     cin >> x;

     switch(x) // dziala tylko na int albo na znak
     {
     case 5:
     cout << "podales 5" << endl;
     x = x*x;
     cout << "x^2 = " << x << endl;
     break;
     case 10:
     cout << "podales 10" << endl;
     x = x*x;
     cout << "x^2 = " << x << endl;
     break;
     case 15:
     cout << "podales 15" << endl;
     x = x*x;
     cout << "x^2 = " << x << endl;
     break;
     default:
     cout << "pozostale wartosci" << endl;
     break;
     }


     char z;
     int LA = 0, LB = 0, LC = 0, LD = 0;
     cout << "podaj odpowiedz: ";
     cin >> z;

     switch (z)
     {
     case 'A':
     cout << "podales A" << endl;
     LA++;                      // zwiekszenie licznika LA o 1 czyli LA=LA+1
     break;
     case 'B':
     cout << "podales B" << endl;
     LB++;
     break;
     case 'C':
     cout << "podales C" << endl;
     LC++;
     break;
     case 'D':
     cout << "podales D" << endl;
     LD++;
     break;
     default:
     cout << "blad odpowiedzi" << endl;
     break;
     }

     system ("clear");

     cout << "liczba odp A to " << LA << endl;
     cout << "liczba odp B to " << LB << endl;
     cout << "liczba odp C to " << LC << endl;
     cout << "liczba odp D to " << LD << endl;
   */
  int x, y;
  char a;
  cout << "podaj znak dzialania: ";
  cin >> a;
  cout << "podaj pierwsza liczbe: ";
  cin >> x;
  cout << "podaj druga liczbe: ";
  cin >> y;

  switch (a)
    {
    case '/':
      cout << x << "/" << y << "=" << x / y;
      break;
    case '*':
      cout << x << "*" << y << "=" << x * y;
      break;
    case '+':
      cout << x << "+" << y << "=" << x + y;
      break;
    case '-':
      cout << x << "-" << y << "=" << x - y;
      break;
    }

  return 0;
}
