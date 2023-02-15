#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int zbior[10];
    int a, i, j, zmienna;
    bool tru;
    
    srand(time(NULL));
    
    for (a=0; a<10; a++) {
        zbior[a] = rand()%101;
    }
    
    for (i=0; i<=8; i++) {
        
        for (j=0; j<=8; j++) {
            
            if (zbior[j] > zbior[j+1]) {
                
                zmienna = zbior[j];
                zbior[j] = zbior[j+1];
                zbior[j+1] = zmienna;
                
            }
            
        }
        
    }
    
    for (a=0; a<10; a++) {
        cout << zbior[a] << " ";
    }

    return 0;
}
