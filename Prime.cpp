#include <iostream>
using namespace std;

int main()
{
    int a, i;
    cout << "Enter a number:\n";
    cin >> a;

    for (i = 2; i <= a/2; ++i)
    {
        if(a % i == 0)
        {
            cout <<"Not a Prime Number";
        }
        else{
            cout <<"Prime Number";
        }
    }
    
    return 0;
}