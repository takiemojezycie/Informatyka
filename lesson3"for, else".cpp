#include <iostream>

using namespace std;

int
main ()
{
    /*
      double x;
    cout << "Podaj liczbę kilomterów: ";
    cin >> x;
    if (x < 0)
        {
            cout << "Kilometry nie mogą być ujemne!";
        }
    else
        {
            cout << "Dobrze!"<< endl;
            cout << x << "km to " << x * 1000 << "m";
        }
    */
  
  
  int x;
  cout << "Podaj liczbę: ";
  cin >> x;
  // operatory logiczne == != >= <= > <
  if (x >= 0)
    {
      cout << "|x| = " << x << endl;
    }
  else
    {
      x = x * (-1);
      cout << "|x| = " << endl;
    }
  int rok;
  int lata;


  cout << "Podaj rok urodzenia: ";
  cin >> rok;
  if (rok > 2022)
    {
      cout << "To niemozliwe!" << endl;
      cout << "Podaj rok urodzenia jeszcze raz: ";
      cin >> rok;
      lata = 2022 - rok;
      if (lata >= 18)
    	{
    	  cout << "Jestes pelnoletni, masz " << lata << " lat";
    	}
          else
    	{
    	  cout << "Jestes niepelnoletni, masz " << lata << " lat";
    	}
    }
    else
    {
        lata = 2022 - rok;

        if (lata >= 18)
            {
                cout << "Jestes pelnoletni, masz " << lata << " lat";
            }
        else
            {
              cout << "Jestes niepelnoletni, masz " << lata << " lat";
            }
    }


  return 0;
}
