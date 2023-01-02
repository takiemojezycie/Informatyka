#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
    int i, j;
  
    string litery;
    string wyraz;
    string możliwosci;
    
    cout << "Podaj słowo: " << endl;
    cin >> litery;
    
    
    void permutuj(string slowo, int poz = 0)
    {
        if (poz == slowo.size())
        {
            cout << slowo << endl;
        } 
      else
        {
            for (int i = poz; i < slowo.size(); i++)
            {
                swap(slowo[i], slowo[poz]);
                permutuj(slowo, poz + 1);
                swap(slowo[i], slowo[poz]);
            }
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
  /*
  tab[0]=rand()%n+1;  // pierwszy wylosowany element
  for (i = 1; i < n; i++)
    {
      jest = false;
      x = rand() % n+1;
      for (j = 0; j < i; j++) //sprawdzanie wylosowanych elementow
      {

      if (x == tab[j])//czy element sie powtarza
        {
            jest=true;
            i--;      // zatrzymanie na tym samym polu w tablicy
        }
      }

      if(jest==false) // wpisujemy gdy jest rozny od wszystkich
         tab[i]=x;
    }

 for (i = 0; i < n; i++)
 {
     cout << tab[i] << " "; // wypisanie el na tablicy
 }
}

int main ()
{
  int t[10];

  losbezpow(t,10);
return 0;
*/
}
