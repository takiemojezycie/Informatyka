#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g=2, h;
    
    cout << "podaj szerokość figury: ";
    cin >> a;
    cout << "podaj wysokość figuy: ";
    cin >> b;
    
    for (c=1; c<=a; c++)
    {
       cout << "O "; 
    }
    cout << endl;
    for (d=1; d<=b-2; d++)
    {
        cout << "O ";
        if (a!=b)
        {
            for (e=1; e<=a-2; e++)
            {
                cout << "X ";
            }
        }
        else
        {
            for (e=1; e<=a-2; e++)
            {
                for (f=1; f<=g; f++)
                {
                    cout << "x";
                }
                g = g++;
            }
        }
        cout << "O " << endl;
    }
    for (c=1; c<=a; c++)
    {
       cout << "O "; 
    }
    cout << endl;

    return 0;
}
