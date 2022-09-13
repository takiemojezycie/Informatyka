/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int a, b=1, c, d;
    srand(time(NULL));
    string liczby = "";

    
    cout << "wybierz rodzaj liczb: 1-parzyste, 2-nieparzyste: ";
    cin >> a;
    
    if (a==1)
    {
        
        while (b<=50)
        {
            c = rand()&101;
            if (c%2==0)
            {
                cout << "liczba nr " << b << "     "; 
                cout << c << endl;
                b = b+1;
            }
            liczby = liczby + to_string(c) + "  ";
        }
    }
    else
    {
        while (b<=50)
        {
            c = rand()&101;
            if (c%2!=0)
            {
                cout << "liczba nr " << b << "     "; 
                cout << c << endl;
                b = b+1;
            }
        }
    }
    

    return 0;
}
