// Write a program to find the Factors of a number
#include <iostream>

using namespace std;

int main()
{
    int a, i;
    cout << "Enter a number:\n";
    cin >> a;
    cout << "Factors are :";
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            cout << i << " ";
        }
    }
    
    return 0;
}