#include <iostream>
#include <time.h>
#include <algorithm>

using namespace std;

int main()
{
    int i;
    int zbior[20];
    srand(time(NULL));
    int najw[20];
    
    for (i=0; i<20; i++)
    {
        zbior[i] = rand()%11;
    }
    
    
    for (i=0; i<20; i++)
    {
        najw[i] = count(zbior, zbior + 20, zbior[i]);
    }
    
    int max = najw[0];
    
    for(int i=0;i<20;i++)
    {
		if(max > najw[i])
		{
			max = najw[i];
		}
    }
    
    cout << zbior[max] << " powtarza sie " << najw[max] << " razy" << endl << endl;
    for (i=0; i<20; i++)
    {
        cout << zbior[i] <<" ";
    }
    return 0;
}
