// Write a program to identify if the number is Perfect number or not
// E.g. Let number is 28, factors of 28 are 1,2,4,7,14. Now the sum of all these factors are 28 itself.
#include <iostream>

using namespace std;

int main()
{
    int a, i, sum = 0;
    cout << "Enter a number:\n";
    cin >> a;
    cout << "Factors are :";
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            cout << i << " ";
            sum = sum + i;
        }
    }
    if(sum == a)
    {
        cout<<"\nIt is a Perfect Number";
    }
    else
    {
        cout<<"\nIt is not a Perfect Number";
    }
    return 0;
}