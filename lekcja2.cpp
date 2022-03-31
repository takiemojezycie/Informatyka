#include <iostream>

using namespace std;

int main()
{
       /*
    double x;
    char znak;
    string napis;
    
    cout << "podaj liczbę: ";
    cin >> x;
    cout << "wpisana liczba to: " << x << endl;
    x = 123.4323;
    cout << "nowa liczba to: " << x << endl;
    
    cout << "podaj literę: ";
    cin >> znak;
    cout << "wpisana litera to: " << znak << endl;
    znak = 'A'; // wprowadzenie znaku w ' '
    cout << "nowa litera to: " << znak << endl;
    
    cout << "podaj zdanie: ";
    cin >> napis; // wczytywanie do spacji lub entera
    cout << "wpisane zdanie to: " << napis << endl;
    napis = "Ala ma \nkota 123"; // wpisanie całego napisu
    cout << "nowe zdanie to: " << napis << endl;
    */
    
    string imie;
    char literanazwiska;
     cout << "Podaj imię poszukiwanego: ";
     cin >> imie;
     cout << "Podaj pierwszą literę nazwiska poszukiwanego: ";
     cin >> literanazwiska;
     cout << "Poszukiwany " << imie << " " << literanazwiska << ".";
    
    
    return 0;
}
