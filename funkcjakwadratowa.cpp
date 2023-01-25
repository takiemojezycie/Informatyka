#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, d, delta;
    
    cout << "Podaj a:";
    cin >> a;
    cout << "Podaj b:";
    cin >> b;
    cout << "Podaj c:";
    cin >> c;

    
    delta = b * b - 4 * a * c;
    if (delta == 0)
    {
        cout << "Jedno miejsce zerowe: " << (-1 * b) / 2 * a;
    }
    else if (delta < 0)
    {
        cout << "Brak miejsc zerowych";
    }
    else
    {
        cout << "Pierwsze miejsce zerowe: " << (-1 * b + sqrt(delta)) / 2 * a << endl;
        cout << "Drugie miejsce zerowe: " << (-1 * b - sqrt(delta)) / 2 * a << endl;
    }
    
    return 0;
}
