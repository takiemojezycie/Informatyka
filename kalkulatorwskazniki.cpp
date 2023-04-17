#include <iostream>

using namespace std;



int main()
{
    char dzialanie;
    char *wskdzial = &dzialanie;
    float a = 0, b = 0;
    float *wska = &a;
    float *wskb = &b;
    
    while (true)
    {
        cout << "Jaki rodzaj dzialania: " << endl;
        cin >> *wskdzial;
        cout << "a: ";
        cin  >> *wska;
        cout << "b: ";
        cin >> *wskb;
        
        if (*wskdzial == '+')
        {
            cout << *wska + *wskb;
        }
        else if (*wskdzial == '-')
        {
            cout << *wska - *wskb;
        }
        else if (*wskdzial == '/')
        {
            cout << *wska / *wskb;
        }
        else if (*wskdzial == '*')
        {
            cout << *wska * *wskb;
        }
        else if (*wskdzial == '%')
        {
            cout << *wska % *wskb;
        }
    }
    return 0;
}
