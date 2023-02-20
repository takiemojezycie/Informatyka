/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int zmienna, a, b, c, i, j;
    
    bool  rosnie = true, maleje = true, rozny;
    
    int zbior[5];
    int zbior1[5];
    int zbior2[5];
    
    
    for (i=0; i<5; i++) {
        cout << "Podaj liczby: ";
        cin >> zmienna;
        zbior[i] = zmienna;
    }
    
    for (i=0; i<5; i++) {
        
        zbior1[i] = zbior[i];
        zbior2[i] = zbior[i];
        
    }
    
    for (i=0; i<=4; i++) {
        
        for (j=0; j<=4; j++) {
            
            if (zbior1[j] > zbior1[j+1]) {
                
                zmienna = zbior1[j];
                zbior1[j] = zbior1[j+1];
                zbior1[j+1] = zmienna;
                
            }
            
        }
        
        for (j=0; j<=4; j++) {
            
            if (zbior2[j] < zbior2[j+1]) {
                
                zmienna = zbior2[j];
                zbior2[j] = zbior2[j+1];
                zbior2[j+1] = zmienna;
                
            }
            
        }
        
    }
    

    
    for (i=0; i<5; i++) {
        if (rosnie == true) {
            if (zbior1[i] = zbior[i]) {
                
                rosnie = true;
                
            }
            else {
                rosnie = false;
            }
        }
        
    }
    
    for (i=0; i<5; i++) {
        if (maleje == true) {
            if (zbior2[i] = zbior[i]) {
                
                maleje = true;
                
            }
            else {
                maleje = false;
            }
        }
        
    }
    
    if (rosnie == true) {
        
        cout << "Funkcja rosnie";
        
    }
    else if (maleje == true) {
        
        "Funkcja maleje";
        
    }
    else {
        
        cout << "Funkcja nieregularna";
        
    }
    
    
    return 0;
}
