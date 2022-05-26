#include <iostream>

using namespace std;

int main()
{
    int x, y, z, a;
    
    cout << "podaj wymiar pionowo: ";
    cin >> z;
    cout << "podaj wymiar poziomo: ";
    cin >> a;
    a = a - 1;
    
    for (x = 1; x <= z; x++)
    {
        for (y = 0; y <= a; y++)
        {
            cout << x + x * y << " ";
        }
        cout << endl;
    }
    return 0;
}
