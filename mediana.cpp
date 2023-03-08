#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int liczba;


    cout << "Ile liczb: " << endl;
    cin >> liczba;
    float liczba1 = liczba;
    liczba1 = (liczba1 / 2) + 0.5;
    
    float zbior[liczba];
    int a, i, j, zmienna;
    bool tru = true;
    float suma;
    
    srand(time(NULL));
    
    for (a=0; a<liczba; a++)
    {
        zbior[a] = rand()%101;
    }
    
    for (i=0; i<=liczba-2; i++)
    {
        
        for (j=0; j<=liczba-2; j++)
        {
            
            if (zbior[j] > zbior[j+1])
            {
                
                zmienna = zbior[j];
                zbior[j] = zbior[j+1];
                zbior[j+1] = zmienna;
                
            }
            
        }
        
    }
    
    if (liczba % 2 != 0)
    {
        for (a=0; a<liczba; a++)
        {
            if (a == liczba1 - 1)
            {
                cout << ">>" << zbior[a] << " ";
            }
            else
            {
                cout << zbior[a] << " ";
            }
        }
    }
    else
    {
        for (a=0; a<liczba; a++)
        {
            cout << zbior[a] << " ";
            if ((a + 1) == (liczba / 2))
            {
                cout << ">>" << (zbior[a] + zbior[a + 1])/2 << " ";
            }
        }
    }

    
    

    return 0;
}
