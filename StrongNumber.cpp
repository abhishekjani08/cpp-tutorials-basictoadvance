/******************************************************************************
Write a program to identify if the number is Strong number or not
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int i, n, n1;
    int sum = 0 ;
    long fact;
    cout << " Enter a Number: ";
    cin >> n;
    n1 = n;
    for (int j = n; j > 0; j = j / 10) {
        fact = 1;
        for (i = 1; i <= j % 10; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
    }
    if ( sum == n1) {
        cout << n1 << " is Strong number." << endl;
    }
    else {
        cout << n1 << " is not a Strong number." << endl;
    }
}