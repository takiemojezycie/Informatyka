#include <iostream>
#include <time.h>
#include <algorithm>

using namespace std;

int main()
{
    int i;
    int zbior[20];
    srand(time(NULL));
    int najw[20];
    
    for (i=0; i<20; i++)
    {
        zbior[i] = rand()%11;
    }
    
    
    for (i=0; i<20; i++)
    {
        najw[i] = count(zbior, zbior + 20, zbior[i]);
    }
    
    int max = najw[0];
    
    for(int i=0;i<20;i++)
		if(max > najw[i])
			max = najw[i];
    
    cout << zbior[max] << " powtarza sie " << najw[max] << " razy" << endl << endl;
    

    int liczba;
    liczba = zbior[max];
    
    for (i=0; i<20; i++)
    {
        if (zbior[i] == liczba)
        {
            cout << ">" << zbior[i] << " ";
        }
        else
        {
            cout << zbior[i] << " ";
        }
    }
    
    /*
    int liczba;
    
    cout << "Jaka liczbe chcesz sprawdzic: ";
    cin >> liczba;
    
    for (i=0; i<20; i++)
    {
        if (zbior[i] == liczba)
        {
            cout << ">" << zbior[i] << " ";
        }
        else
        {
            cout << zbior[i] << " ";
        }
    }
    */
    
    
    
    return 0;
}
