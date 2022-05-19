#include <iostream>

using namespace std;

int main()
{
    /*
    int x1, x2, x3;
    srand(time(NULL));
    x1 = rand()%1001;   // <0, 1000>
    x2 = rand()%101;    // <0, 100>
    x3 = rand()%11;     // <0, 10>
    
    cout << "wylosowano liczby: " << x1 << " " << x2 << " " << x3;
    
    
    int a, x1;
    
    srand(time(NULL));
    
    
    for (a = 0; a <100; a++)
    {
        cout << "Wylosowano liczbe" << a + 1 << endl;
        x1 = rand()%101;
        cout << x1<< endl;
        if (x1 == 100)
        {
            cout << "największa możliwa liczba";
            break;
        }
        else if (x1 == 0)
        {
            cout << "najmniejsza możliwa liczba";
            break;
        }
    }
    
    
    int a, x1, b, c;
    srand(time(NULL));
    cout << "podaj ilość liczb";
    cin >> a;
    cout << "podaj zakres losowych liczb";
    cin >> b;
    
    for (c = 0; c < a; c++)
    {
        cout << "Wylosowano liczbe" << c + 1 << endl;
        x1 =rand()%b;
        cout << x1<< endl;
    }
    
    https://www.google.com/url?sa=i&url=https%3A%2F%2Fallegrolokalnie.pl%2Foferta%2Fkalkulator-naukowy-z-ulamkami&psig=AOvVaw00eFi647VCsP2NmsRrEOzz&ust=1653034074227000&source=images&cd=vfe&ved=0CAkQjRxqFwoTCJjXjfqN6_cCFQAAAAAdAAAAABAg
    
    */
    
    int a, x1, b, c, d;
    srand(time(NULL));
    
    cout << "podaj ilość liczb: ";
    cin >> a;
    cout << "podaj zakres losowych liczb: ";
    cin >> b;
    d = b;
    for (c = 0; c < a; c++)
    {
        cout << "Wylosowano liczbe " << c + 1 << endl;
        x1 =rand()%b;
        cout << x1<< endl;
        if (x1 <= d)
        {
            d = x1;
        }
        
    }
    cout << "liczba najmniejsza: " << d;
    
    return 0;
}
