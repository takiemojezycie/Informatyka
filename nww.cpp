#include <iostream>

using namespace std;

int main( )
{
    unsigned long long a, b, t, ab;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    
    ab = a * b;
    while(b)
    {
        t = b;
        b = a % b;
        a = t;
    }
    ab /= a;
    cout << ab << endl << endl;
    return 0;
} 
