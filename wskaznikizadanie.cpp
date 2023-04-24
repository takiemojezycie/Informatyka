#include <iostream>

using namespace std;

int main()
{
    int tab[10];
    
    srand(time(NULL));
    
    int x, num = 100;
    int *wskx = &x;
    int *wnum = &num;
    
    for(*wskx = 0; *wskx<3; (*wskx)++)
    {
        *(tab + *wskx) = rand()%100 + 1;
    }
    for(*wskx = 3; *wskx<6; (*wskx)++)
    {
        cout << "Podaj liczbe: ";
        cin >> *(tab + *wskx);
        cout << endl;
    }
    for(*wskx = 6; *wskx <10; (*wskx)++)
    {
        *(tab + *wskx) = *wnum;
        *wnum = *wnum + 100;
    }
    
    for (*wskx = 0; *wskx <10; (*wskx)++)
    {
        cout << *(tab + *wskx) << " ";
    }
    
    
    
    return 0;
}
