#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    float zbior[10];
    int a, i, j, zmienna;
    bool tru = true;
    float suma;
    
    srand(time(NULL));
    
    for (a=0; a<10; a++)
    {
        zbior[a] = rand()%101;
    }
    
    for (i=0; i<=8; i++)
    {
        
        for (j=0; j<=8; j++)
        {
            
            if (zbior[j] > zbior[j+1])
            {
                
                zmienna = zbior[j];
                zbior[j] = zbior[j+1];
                zbior[j+1] = zmienna;
                
            }
            
        }
        
    }
    
    for (a=0; a<10; a++)
    {
        suma = suma + zbior[a];
    }
    
    float srednia = suma / 10;
    
    for (a=0; a<10; a++)
    {
        cout << zbior[a] << " ";
        if (tru == true)
        {
            if (srednia < zbior[a+1])
            {
                cout << srednia << " ";
                tru = false;
            }
        }
    }
    
    

    return 0;
}
