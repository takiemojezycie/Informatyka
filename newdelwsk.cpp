#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    int x = rand()%10 + 1;
    int *tab = new int[x];
    
    
    for (int a=0; a<5; a++)
    {
        int x = rand()%10 + 1;
        int *tab = new int[x];
        cout << "Liczba elementów w tablicy wynosi: "<< x << endl;
        for (int i=0; i<x; i++)
        {
            tab[i] = rand()%20 + 1;
            cout << tab[i] << " a jego kwadratem jest: " << tab[i] * tab[i] << " | ";
            cout << endl;
        }
        cout << endl;
        delete[] tab;
    }

    return 0;
}
