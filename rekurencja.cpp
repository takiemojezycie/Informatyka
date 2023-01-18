#include <iostream>

using namespace std;

int recursion(int n)
{
    if (n==0)
    {
        return 2;
        
    }
    if ((n==1) ||(n==2))
    {
        return 1;
        
    }
    if (n==3)
    {
        return 0;
        
    }
    
    return recursion(n-3) + 2 * recursion(n-2) - 2 * recursion(n-1);
}

int main()
{
    
    cout << recursion(6);

    return 0;
}
