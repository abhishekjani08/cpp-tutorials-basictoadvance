/*Day 19 coding Statement : Write a program to identify if the number is Armstrong number or not
Get an input number from user and check whether the given number is an Armstrong number or not.
E.g. Let the number be 1634,
Here 1^4 + 6^4 + 3 ^4 + 4^4 = 1634*/

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int a, b, i, sum = 0, count = 0;
    cout << "Enter a number:";
    cin >> a;

    do
    {
        i = a % 10;
        sum = sum + i * i * i * i;
        a = a / 10;
        ++count;
    } while (a != 0);

    if (sum == b)
    {
        cout << "\n"
             << b << " is a Armstrong Number";
    }
    else
    {
        cout << "\n"
             << b << " is Not a Armstrong Number";
    }
    return 0;
}