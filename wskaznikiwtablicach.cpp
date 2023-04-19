#include <iostream>

using namespace std;

int main()
{
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    int *wtab = tab; //int *wtab = &tab[0];
    cout << endl;
    
    cout << "tab = " << *wtab << endl;
    cout << "&wtab[0] = " << &wtab[0] << endl << endl;
                         //wtab[0]
    cout << "tab+1 = " << *(wtab+1) << endl;
    cout << "&tab[1] = " << &wtab[1] << endl << endl;
                           //wtab[1]
    cout << "tab+2 = " << *(wtab+2) << endl;
    cout << "&tab[2] = " << &wtab[2] << endl << endl;
                           //wtab[2]
    

    return 0;
}
