#include <iostream>
#include <iomanip>

using namespace std;

double f(double x) {
    return 0.2 * x - 2.4;
}

double dzielenie(double a, double b, double dokladnosc) {

    if (f(a) == 0) {
            return a;
        }

        if (f(b) == 0) {
            return b;
        }

    double srodek;

    while(b - a > dokladnosc) {

        srodek = (a + b) / 2;

        if (f(srodek) == 0) {
            return srodek;
        }

        if (f(a) * f(srodek) < 0) {
            b = srodek;
        }
        else {
            a = srodek;
        }

    }

    return (a+b)/2;
}

int main(){

    cout << "Miejsce zerowe to: " << setprecision(5) << dzielenie(2, 100, 0.00001);

    return 0;
}
