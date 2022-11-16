#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long double fib[100000]; int n, i;
    
    // cout << "Ile liczb Fibonacciego mam wyznaczyc: ";
    cout << "Która liczbe ciagu chcesz wyznaczyc: ";
    cin >> n;
    
    fib[0] = 1;
    fib[1] = 1;
    
    for (i=2; i<n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
cout << setprecision(10000);

    
    cout << endl << "Wyraz nr " << n << ": " << fib[n-1];
    /*
    for (i=0; i<n; i++)
    {
        cout << endl << "wyraz nr " << i+1 << ": " << fib[i];
    }
    */
    return 0;
}








/*
int main()
{
    float oceny[5]; float suma = 0, srednia;
    
    for(int i=0; i<5; i++)
    {
        cout << endl << "Podaj " << i+1 << " ocene: " << endl;
        cin >> oceny[i];
        suma += oceny[i];
    }
    srednia = suma / 5;
    cout << srednia;

    return 0;
}
*/
