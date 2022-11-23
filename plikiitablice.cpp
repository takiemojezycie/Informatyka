#include <iostream>
#include <fstream>
using namespace std;

int main() {
    float tablica[30];
    float srednie1[10];
    float srednie2[5];
    int x, y, z;

    fstream plik("dane.txt", ios::in);

    for(x=0; x<30; x++)
    {
        plik >> tablica[x];
        cout << tablica[x] << endl;
    }

    plik.close();

    for(y=0; y<10; y++)
    {
        srednie1[y] = (tablica[y] + tablica[y+1] + tablica[y+2]) / 3;
        cout << srednie1[y] << endl;
    }


    fstream wynik("wynik.txt", ios::out);

    for(z=0; z<5; z++)
    {
        srednie2[z] = (srednie1[z] + srednie1[z+1]) / 2;
        cout << srednie2[z] << endl;
        wynik << srednie2[z] << " ";
    }

    wynik.close();
}
