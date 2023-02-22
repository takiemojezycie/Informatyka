/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int rekurencja(int n) {
    
    if (n <= 2) 
    {
            
            return 0;
            
    }
    else 
    {
        
        return 2 * rekurencja(n - 1) + 2;
        
    }
    
}

int main()
{
    int liczba;
    
    cout << "Podaj liczbę: ";
    
    cin >> liczba;
    
    cout << "Rekurencja dla liczby wynosi: " << rekurencja(liczba);

    return 0;
}
