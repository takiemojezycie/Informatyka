#include <iostream>

using namespace std;

int main()
{
   /*
   int a ;
   cout << "podaj liczbę z przedziału: ";
   cin >> a;
   if (a<0)
   {
       cout << "liczba ujemna" << endl;
   }
   else if (a==0)
    {
        cout << "liczba 0" << endl;
    }
    else
    {
        cout << "liczba dodatnia" << endl;
    }
    
    
    // operatory logiczne AND = && (*) LUB = || (+)
    
    if (a>=0) //<0
    {
        if (a<=10) //10>
        {
            cout << "liczba jest w przedziale" << endl;
        }
        else
        {
            cout << "liczba jest poza przedziałem" << endl;
        }
    }
    else
    {
        cout << "liczba poza przedziałem" << endl;
    }
    
    /////////////////////////////////////////////////////////////////////
    
    if ((a>=0)&&(a<=10))
    {
        cout << "liczba jest w przedziale" << endl;
    }
    else
    {
        cout << "liczba jest poza przedziałem" << endl;
    }
    
    
    
    ////////////////////////////////////////////////////////////////
    if ((a<=0) || (a>=10)
    {
        cout << "liczba jest w przedziale" << endl;
    }
    else
    {
        cout << "liczba jest poza przedziałem" << ednl;
    }
    
    
    */
    
    int a;
    cout << "podaj liczbe: ";
    cin >> a;
    if (((a>-50) || (a<=0)) && (a>=10))
    {
        cout << "liczba w przedziale" << endl;
    }
    else
    {
        cout << "liczba poza przedzialem" << endl;
    }
    
    if (a>-50)
    {
        if (a<0)
        {
            cout << "liczba w przedziale" << endl;
        }
        else if (a>=10)
        {
            cout << "liczba w przedziale" << endl;
        }
        else
        {
            cout << "liczba poza przedzialem" << endl;
        }
        else
        {
            cout << "liczba poza przedzialem";
        }
    }
    
    return 0;
    
}
