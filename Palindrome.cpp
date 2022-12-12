
// Write a program to identify if the number is Palindrome or not
#include <iostream>
using namespace std;
int main()
{
    int a, palin=0, rev=0,n;
    cout << "Enter a number:\n";
    cin >> a;
    n=a;
    do
    {
        palin = a % 10;
        rev = (rev * 10) + palin;
        a = a / 10;
    } while (a != 0);
    if (n == rev)
    {
        cout << "It is a palindrome number";
    }
    else
    {
        cout << "It is not a palindrome number";
    }
    return 0;
}