#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int zbior[n] = {5, 4, 3, 2, 3};
    int i;
    bool rosnie=false, maleje=false, rozna=false;
    int liczba;
    
    for (i=0; i<n-1; i++)
    {
        liczba = zbior[i];
        
        if (zbior[i+1] >= liczba)
        {
            rosnie = true;
        }
        else
        {
            rosnie = false;
            break;
        }
        
    }
    
    for (i=0; i<n-1; i++)
    {
        liczba = zbior[i];
        
        if (zbior[i+1] <= liczba)
        {
            maleje = true;
        }
        else
        {
            maleje = false;
            break;
        }
    }
    
    if (rosnie == true)
    {
        cout << "Funkcja rosnie";
    }
    else if (maleje == true)
    {
        cout << "Funkcja maleje";
    }
    else
    {
        cout << "Funkcja nieregularna";
    }
    
    return 0;
}
