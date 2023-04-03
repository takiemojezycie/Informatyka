#include <iostream>

using namespace std;

int main()
{
    int liczba, a, b, c;
    bool pierwsza = true;
    int tab[100];
    srand(time(NULL));
    
    liczba = rand()%100 + 1;
    
    if (liczba < 2)
    {
        pierwsza = false;
    }
    else
    {
        for(a=2; a < liczba; a++)
        {
            if (liczba%a == 0)
            {
                pierwsza = false;
                break;
            }

        }
        
    }
    
    cout << liczba;
    if (pierwsza == true)
    {
        cout << " jest pierwsza";
    }
    else
    {
        cout << " nie jest pierwsza";
    }
    

    return 0;
}
