#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int podstawa, odstep, wysokosc, a, b, c=1, d;
    
    cout << "podaj podstawę: ";
    cin >> podstawa;
    
    if (podstawa%2 != 0)
    {
        odstep = (podstawa - 1) / 2;
        wysokosc = odstep + 1;
        for (d=1; d<=wysokosc; d++)
        {
            for (a=odstep; a>=c; a--)
            {
                cout << "  ";
            }
            for (b=1; b<c; b++)
            {
                cout << "X ";
            }
            cout << "O ";
            for (b=1; b<c; b++)
            {
                cout << "X ";
            }
            cout << endl;
            c = c + 1;
        }
    }
    else
    {
        odstep = (podstawa - 2) / 2;
        wysokosc = podstawa / 2;
        for (d=1; d<=wysokosc; d++)
        {
            for (a=odstep; a>=c; a--)
            {
                cout << "  ";
            }
            
            for (b=1; b<c; b++)
            {
                cout << "X ";
            }
            
            cout << "O O ";
            
            for (b=1; b<c; b++)
            {
                cout << "X ";
            }
            
            cout << endl;
            
            c = c + 1;
        }
    }



    return 0;
}
