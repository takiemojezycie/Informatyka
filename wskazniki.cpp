#include <iostream>

using namespace std;

int main()
{
    int x=10;
    //int x;
    //x=10;
    cout << "x = " << x << endl;
    cout << "adres x = " << &x << endl << endl;
    
    int *wskx = &x; //tworzenie wskaznika
    int *wsk2 = &x;
    
    //*wskx;
    //wskx = &x;
    
    cout << "Notacja wskaznikowa: " << endl;
    cout << "x = " << *wskx << endl;
    cout << "adres x = " << wskx << endl;
    return 0;
}
