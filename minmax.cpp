#include <iostream>
#include <time.h>

using namespace std;


int main()
{
    int min, tab[]={23, 3, 6, 7, 8, 7, 42, 33, 11, 7}; 
	
	min = tab[0];
	
	for(int i=0;i<10;i++)
		if(min>tab[i])
			min = tab[i];
	
	cout<<"Najmniejszą wczytaną liczbą jest "<<min<<endl;

	return 0;
}
